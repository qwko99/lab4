#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <pthread.h>

#define BUF_SIZE 100
#define NAME_SIZE 20

char name[NAME_SIZE] = "[DEFAULT]";
char msg[BUF_SIZE];

void *send_msg(void *arg) // 메시지 전송 함수
{
    int sock = *((int *)arg);
    char name_msg[NAME_SIZE + BUF_SIZE];
    while (1)
    {
        fgets(msg, BUF_SIZE, stdin);
        if (!strcmp(msg, "q\n") || !strcmp(msg, "Q\n")) // q나 Q 누르면 종료
        {
            close(sock);
            exit(0);
        }
        sprintf(name_msg, "%s %s", name, msg);
        write(sock, name_msg, strlen(name_msg)); // 메시지를 씀
    }
    return NULL;
}

void *recv_msg(void *arg) // 메시지 수신 함수
{
    int sock = *((int *)arg);
    char name_msg[NAME_SIZE + BUF_SIZE];
    int str_len;
    while (1)
    {
        str_len = read(sock, name_msg, NAME_SIZE + BUF_SIZE - 1);
        if (str_len == -1)
            return (void *)-1;
        name_msg[str_len] = 0;
        fputs(name_msg, stdout);
    }
    return NULL;
}

int main(int argc, char *argv[])
{
    int sock;
    struct sockaddr_in serv_addr;
    pthread_t snd_thread, rcv_thread;
    void *thread_return;

    if (argc != 4)
    { // IP주소, 포트번호, 이름을 인자로 받아야 함
        printf("Usage : %s <IP> <port> <name>\n", argv[0]);
        exit(1);
    }

    sprintf(name, "[%s]", argv[3]);
    sock = socket(PF_INET, SOCK_STREAM, 0); // 소켓 생성

    memset(&serv_addr, 0, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET; // 주소 정보 설정
    serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
    serv_addr.sin_port = htons(atoi(argv[2]));

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) == -1) // 소켓 연결
    {
        perror("connect() failed");
        exit(1);
    }
    pthread_create(&snd_thread, NULL, send_msg, (void *)&sock); // 쓰레드 생성
    pthread_create(&rcv_thread, NULL, recv_msg, (void *)&sock);
    pthread_join(snd_thread, &thread_return); // 쓰레드 소멸
    pthread_join(rcv_thread, &thread_return);
    close(sock);
    return 0;
}