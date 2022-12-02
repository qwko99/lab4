/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_mul;
    QPushButton *btn_7;
    QPushButton *pushButton_plus;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_clear;
    QPushButton *btn_9;
    QLineEdit *lineEdit;
    QPushButton *pushButton_result;
    QPushButton *btn_8;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_2;
    QPushButton *pushButton_div;
    QPushButton *btn_4;
    QPushButton *pushButton_minus;
    QPushButton *btn_0;
    QLineEdit *lineEdit_4;
    QPushButton *btn_3;
    QLabel *label;
    QPushButton *btn_1;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QPushButton *pushButton_exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(439, 287);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 435, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_mul = new QPushButton(gridLayoutWidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));

        gridLayout->addWidget(pushButton_mul, 4, 3, 1, 1);

        btn_7 = new QPushButton(gridLayoutWidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));

        gridLayout->addWidget(btn_7, 4, 0, 1, 1);

        pushButton_plus = new QPushButton(gridLayoutWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));

        gridLayout->addWidget(pushButton_plus, 2, 3, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        pushButton_clear = new QPushButton(gridLayoutWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        gridLayout->addWidget(pushButton_clear, 5, 0, 1, 1);

        btn_9 = new QPushButton(gridLayoutWidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));

        gridLayout->addWidget(btn_9, 4, 2, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        pushButton_result = new QPushButton(gridLayoutWidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));

        gridLayout->addWidget(pushButton_result, 5, 2, 1, 1);

        btn_8 = new QPushButton(gridLayoutWidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));

        gridLayout->addWidget(btn_8, 4, 1, 1, 1);

        btn_5 = new QPushButton(gridLayoutWidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));

        gridLayout->addWidget(btn_5, 3, 1, 1, 1);

        btn_6 = new QPushButton(gridLayoutWidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));

        gridLayout->addWidget(btn_6, 3, 2, 1, 1);

        btn_2 = new QPushButton(gridLayoutWidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));

        gridLayout->addWidget(btn_2, 2, 1, 1, 1);

        pushButton_div = new QPushButton(gridLayoutWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));

        gridLayout->addWidget(pushButton_div, 5, 3, 1, 1);

        btn_4 = new QPushButton(gridLayoutWidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));

        gridLayout->addWidget(btn_4, 3, 0, 1, 1);

        pushButton_minus = new QPushButton(gridLayoutWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));

        gridLayout->addWidget(pushButton_minus, 3, 3, 1, 1);

        btn_0 = new QPushButton(gridLayoutWidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));

        gridLayout->addWidget(btn_0, 5, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(true);

        gridLayout->addWidget(lineEdit_4, 1, 4, 1, 1);

        btn_3 = new QPushButton(gridLayoutWidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));

        gridLayout->addWidget(btn_3, 2, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 3, 1, 1);

        btn_1 = new QPushButton(gridLayoutWidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));

        gridLayout->addWidget(btn_1, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(true);

        gridLayout->addWidget(lineEdit_3, 1, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 5);

        pushButton_exit = new QPushButton(gridLayoutWidget);
        pushButton_exit->setObjectName(QString::fromUtf8("pushButton_exit"));

        gridLayout->addWidget(pushButton_exit, 3, 4, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 439, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\352\263\204\354\202\260\352\270\260", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "\354\242\205\353\243\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
