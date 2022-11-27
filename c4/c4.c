#include <stdio.h>
#include <pthread.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX_THREADS 5
#define BUF_SIZE 512

sigset_t sigset;

typedef struct
{
    char msg[BUF_SIZE];
    int wr_check;
    pthread_mutex_t mutex;
    pthread_cond_t read;
} buffer;

int thread_flag[MAX_THREADS] = {
    0,
};

buffer bf = {"no message", 0,
             PTHREAD_MUTEX_INITIALIZER,
             PTHREAD_COND_INITIALIZER};

int in_msg()
{
    int status, signal, i;

    while (1)
    {
        sigwait(&sigset, &signal);
        if (signal == SIGTSTP)
        {
            status = pthread_mutex_lock(&bf.mutex);
            if (status != 0)
            {
                return status;
            }
            printf("\n메세지 입력하세요 > ");
            fgets(bf.msg, BUF_SIZE, stdin);
            bf.wr_check = 1;

            for (i = 0; i < MAX_THREADS; i++)
            {
                thread_flag[i] = 1;
            }

            if (pthread_cond_signal(&bf.read))
            {
                pthread_mutex_unlock(&bf.mutex);
                return status;
            }
            pthread_mutex_unlock(&bf.mutex);
        }
    }
}

int out_msg(void *arg)
{
    int status;

    status = pthread_mutex_lock(&bf.mutex);
    if (status != 0)
    {
        return status;
    }
    status = pthread_cond_wait(&bf.read, &bf.mutex);
    if (status != 0)
    {
        pthread_mutex_unlock(&bf.mutex);
        return status;
    }
    if (bf.wr_check && thread_flag[(int)arg])
    {
        printf("쓰레드 %d : %s", (int)arg, bf.msg);
        pthread_cond_signal(&bf.read);
        thread_flag[(int)arg] = 0;
    }
    pthread_mutex_unlock(&bf.mutex);
    return 0;
}

void *signal_thread(void *arg)
{
    while (1)
    {
        in_msg();
    }
}

void *msg_thread(void *arg)
{
    while (1)
    {
        out_msg(arg);
    }
}

int main()
{
    int i;
    int *result;
    pthread_t tid[MAX_THREADS];

    sigemptyset(&sigset);
    sigaddset(&sigset, SIGTSTP);
    if (pthread_sigmask(SIG_BLOCK, &sigset, NULL) != 0)
    {
        fprintf(stderr, "Set signal mask");
        exit(1);
    }
    if (pthread_create(&tid[0], NULL, signal_thread, NULL) != 0)
    {
        perror("create thread");
        exit(1);
    }
    for (i = 1; i < MAX_THREADS; i++)
    {
        if (pthread_create(&tid[i], NULL, msg_thread, (void *)i) != 0)
        {
            perror("create thread");
            exit(1);
        }
    }
    pthread_exit(result);
}