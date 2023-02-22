#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
      ui->setupUi(this);
      ui->tableView->setSortingEnabled(true);
      model = new QStandardItemModel(this);
      QStringList labels = QObject::trUtf8("编号,姓名,地址,手机,生日,性别").simplified().split(",");
      model->setHorizontalHeaderLabels(labels);

      model->setItem(0, 0, new QStandardItem("1"));
      model->setItem(0, 1, new QStandardItem("张三"));
      model->setItem(0, 2, new QStandardItem("南昌"));
      model->setItem(0, 3, new QStandardItem("1231457"));
      model->setItem(0, 4, new QStandardItem("1957/3/23"));
      model->setItem(0, 5, new QStandardItem("男"));

      model->setItem(1, 0, new QStandardItem("2"));
      model->setItem(1, 1, new QStandardItem("李四"));
      model->setItem(1, 2, new QStandardItem("上海"));
      model->setItem(1, 3, new QStandardItem("123341457"));
      model->setItem(1, 4, new QStandardItem("2007/5/23"));
      model->setItem(1, 5, new QStandardItem("男"));

      model->setItem(2, 0, new QStandardItem("3"));
      model->setItem(2, 1, new QStandardItem("王五"));
      model->setItem(2, 2, new QStandardItem("湖南"));
      model->setItem(2, 3, new QStandardItem("1239819757"));
      model->setItem(2, 4, new QStandardItem("1994/8/12"));
      model->setItem(2, 5, new QStandardItem("女"));
      ui->tableView->setModel(model);
      ui->tableView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdd_clicked()
{
    this->close();
    MainWindow2 *pic2 =new MainWindow2();
    pic2 -> show();
}

void MainWindow::on_pushButtonDrug_clicked()
{
    this->close();
    MainWindow3 *pic3 =new MainWindow3();
    pic3 -> show();
}
