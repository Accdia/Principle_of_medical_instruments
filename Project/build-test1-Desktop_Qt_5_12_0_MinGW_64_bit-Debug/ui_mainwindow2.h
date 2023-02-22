/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit2_1;
    QLineEdit *lineEdit2_2;
    QLineEdit *lineEdit2_3;
    QLineEdit *lineEdit2_4;
    QLineEdit *lineEdit2_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButtonDetermine;
    QPushButton *pushButtonCancel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(800, 600);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit2_1 = new QLineEdit(centralwidget);
        lineEdit2_1->setObjectName(QString::fromUtf8("lineEdit2_1"));
        lineEdit2_1->setGeometry(QRect(190, 60, 271, 51));
        lineEdit2_2 = new QLineEdit(centralwidget);
        lineEdit2_2->setObjectName(QString::fromUtf8("lineEdit2_2"));
        lineEdit2_2->setGeometry(QRect(190, 120, 271, 51));
        lineEdit2_3 = new QLineEdit(centralwidget);
        lineEdit2_3->setObjectName(QString::fromUtf8("lineEdit2_3"));
        lineEdit2_3->setGeometry(QRect(190, 180, 271, 51));
        lineEdit2_4 = new QLineEdit(centralwidget);
        lineEdit2_4->setObjectName(QString::fromUtf8("lineEdit2_4"));
        lineEdit2_4->setGeometry(QRect(190, 240, 271, 51));
        lineEdit2_5 = new QLineEdit(centralwidget);
        lineEdit2_5->setObjectName(QString::fromUtf8("lineEdit2_5"));
        lineEdit2_5->setGeometry(QRect(190, 300, 271, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 70, 141, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 130, 141, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 190, 141, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 250, 141, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 310, 141, 31));
        pushButtonDetermine = new QPushButton(centralwidget);
        pushButtonDetermine->setObjectName(QString::fromUtf8("pushButtonDetermine"));
        pushButtonDetermine->setGeometry(QRect(550, 80, 221, 101));
        pushButtonCancel = new QPushButton(centralwidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(550, 210, 221, 101));
        MainWindow2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow2->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QApplication::translate("MainWindow2", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow2", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow2", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow2", "\346\211\213\346\234\272\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow2", "\347\224\237\346\227\245\357\274\232", nullptr));
        label_5->setText(QApplication::translate("MainWindow2", "\346\200\247\345\210\253\357\274\232", nullptr));
        pushButtonDetermine->setText(QApplication::translate("MainWindow2", "\347\241\256\345\256\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("MainWindow2", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
