#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_1_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){            // ui의 연산자가 비어 있을 때
           ui->lineEdit->setText(ui->lineEdit->text() + "1");        // 첫 번째 피연산자에 1추가
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "1");    // 두 번째 피연산자에 1
       }
}


void MainWindow::on_btn_2_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "2");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "2");
    }
}

void MainWindow::on_btn_3_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "3");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "3");
    }
}

void MainWindow::on_btn_4_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "4");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "4");
    }
}


void MainWindow::on_btn_5_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "5");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "5");
    }
}


void MainWindow::on_btn_6_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "6");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "6");
    }
}


void MainWindow::on_btn_7_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "7");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "7");
    }
}


void MainWindow::on_btn_8_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "8");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "8");
    }
}


void MainWindow::on_btn_9_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "9");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "9");
    }
}


void MainWindow::on_btn_0_clicked()
{
    if(QString::compare(ui->lineEdit_2->text(), "") == 0){
           ui->lineEdit->setText(ui->lineEdit->text() + "0");
       }
       else{
           ui->lineEdit_3->setText(ui->lineEdit_3->text() + "0");
    }
}


void MainWindow::on_pushButton_plus_clicked()
{
     ui->lineEdit_2->setText("+");
}


void MainWindow::on_pushButton_minus_clicked()
{
    ui->lineEdit_2->setText("-");
}


void MainWindow::on_pushButton_mul_clicked()
{
     ui->lineEdit_2->setText("*");
}


void MainWindow::on_pushButton_div_clicked()
{
     ui->lineEdit_2->setText("/");
}


void MainWindow::on_pushButton_clear_clicked()
{
    ui->lineEdit->setText("");        // ui의 lineEdit의 내용을 ""으로 바꾼다.
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
}


void MainWindow::on_pushButton_result_clicked()
{
    if(ui->lineEdit_2->text() == "+"){
            ui->lineEdit_4->setText(QString::number(ui->lineEdit->text().toInt(NULL,10) + ui->lineEdit_3->text().toInt(NULL,10) ));
        }
        else if(ui->lineEdit_2->text() == "-"){
            ui->lineEdit_4->setText(QString::number(ui->lineEdit->text().toInt(NULL,10) - ui->lineEdit_3->text().toInt(NULL,10) ));
        }
        else if(ui->lineEdit_2->text() == "*"){
            ui->lineEdit_4->setText(QString::number(ui->lineEdit->text().toInt(NULL,10) * ui->lineEdit_3->text().toInt(NULL,10) ));
        }
        else if(ui->lineEdit_2->text() == "/"){
            ui->lineEdit_4->setText(QString::number(ui->lineEdit->text().toInt(NULL,10) / ui->lineEdit_3->text().toInt(NULL,10) ));
        }
}


void MainWindow::on_pushButton_exit_clicked()
{
     this->close();
}

