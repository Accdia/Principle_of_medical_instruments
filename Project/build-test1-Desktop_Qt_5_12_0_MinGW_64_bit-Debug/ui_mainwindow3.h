/********************************************************************************
** Form generated from reading UI file 'mainwindow3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3_H
#define UI_MAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3
{
public:
    QWidget *centralwidget;
    QTableView *tableView3_1;
    QLineEdit *lineEdit3_1;
    QTableView *tableView3_2;
    QPushButton *pushButtonSubmit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow3)
    {
        if (MainWindow3->objectName().isEmpty())
            MainWindow3->setObjectName(QString::fromUtf8("MainWindow3"));
        MainWindow3->resize(1459, 1113);
        centralwidget = new QWidget(MainWindow3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView3_1 = new QTableView(centralwidget);
        tableView3_1->setObjectName(QString::fromUtf8("tableView3_1"));
        tableView3_1->setGeometry(QRect(30, 10, 1411, 211));
        lineEdit3_1 = new QLineEdit(centralwidget);
        lineEdit3_1->setObjectName(QString::fromUtf8("lineEdit3_1"));
        lineEdit3_1->setGeometry(QRect(30, 240, 1411, 81));
        tableView3_2 = new QTableView(centralwidget);
        tableView3_2->setObjectName(QString::fromUtf8("tableView3_2"));
        tableView3_2->setGeometry(QRect(30, 340, 1411, 521));
        pushButtonSubmit = new QPushButton(centralwidget);
        pushButtonSubmit->setObjectName(QString::fromUtf8("pushButtonSubmit"));
        pushButtonSubmit->setGeometry(QRect(560, 880, 351, 171));
        MainWindow3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow3);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1459, 21));
        MainWindow3->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow3);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow3->setStatusBar(statusbar);

        retranslateUi(MainWindow3);

        QMetaObject::connectSlotsByName(MainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3)
    {
        MainWindow3->setWindowTitle(QApplication::translate("MainWindow3", "MainWindow", nullptr));
        pushButtonSubmit->setText(QApplication::translate("MainWindow3", "\346\217\220\344\272\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3: public Ui_MainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3_H
