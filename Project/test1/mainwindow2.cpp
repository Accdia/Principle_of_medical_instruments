#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <QDebug>
#include <QMessageBox>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButtonDetermine_clicked()
{
    QMessageBox::about(NULL,  "提示",  "添加成功！");
    MainWindow *father = new MainWindow();
    this -> close();
    father -> show();
}

void MainWindow2::on_pushButtonCancel_clicked()
{
    MainWindow *father = new MainWindow();
    this -> close();
    father -> show();
}
