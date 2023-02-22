/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit1;
    QLabel *label_2;
    QLineEdit *lineEdit2;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonQuash;
    QPushButton *pushButtonDrug;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1739, 1194);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(160, 50, 1471, 731));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 890, 81, 41));
        lineEdit1 = new QLineEdit(centralWidget);
        lineEdit1->setObjectName(QString::fromUtf8("lineEdit1"));
        lineEdit1->setGeometry(QRect(150, 870, 461, 91));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 880, 141, 61));
        lineEdit2 = new QLineEdit(centralWidget);
        lineEdit2->setObjectName(QString::fromUtf8("lineEdit2"));
        lineEdit2->setGeometry(QRect(750, 870, 471, 91));
        pushButtonSearch = new QPushButton(centralWidget);
        pushButtonSearch->setObjectName(QString::fromUtf8("pushButtonSearch"));
        pushButtonSearch->setGeometry(QRect(10, 1010, 231, 91));
        pushButtonUpdate = new QPushButton(centralWidget);
        pushButtonUpdate->setObjectName(QString::fromUtf8("pushButtonUpdate"));
        pushButtonUpdate->setGeometry(QRect(260, 1010, 211, 91));
        pushButtonAdd = new QPushButton(centralWidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(490, 1010, 241, 91));
        pushButtonDelete = new QPushButton(centralWidget);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(750, 1010, 261, 91));
        pushButtonQuash = new QPushButton(centralWidget);
        pushButtonQuash->setObjectName(QString::fromUtf8("pushButtonQuash"));
        pushButtonQuash->setGeometry(QRect(1030, 1010, 241, 91));
        pushButtonDrug = new QPushButton(centralWidget);
        pushButtonDrug->setObjectName(QString::fromUtf8("pushButtonDrug"));
        pushButtonDrug->setGeometry(QRect(1290, 1010, 261, 91));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1739, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", nullptr));
        pushButtonSearch->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        pushButtonUpdate->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        pushButtonAdd->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\256\260\345\275\225", nullptr));
        pushButtonDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\256\260\345\275\225", nullptr));
        pushButtonQuash->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        pushButtonDrug->setText(QApplication::translate("MainWindow", "\345\274\200\350\215\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
