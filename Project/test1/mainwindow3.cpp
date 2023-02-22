#include "mainwindow3.h"
#include "ui_mainwindow3.h"
#include <QDebug>
#include <QMessageBox>

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
    ui->tableView3_1->setSortingEnabled(true);
    model = new QStandardItemModel(this);
    QStringList labels = QObject::trUtf8("编号,姓名,地址,手机,生日,性别").simplified().split(",");
    model->setHorizontalHeaderLabels(labels);

    model->setItem(0, 0, new QStandardItem("1"));
    model->setItem(0, 1, new QStandardItem("李四"));
    model->setItem(0, 2, new QStandardItem("上海"));
    model->setItem(0, 3, new QStandardItem("123341457"));
    model->setItem(0, 4, new QStandardItem("2007/5/23"));
    model->setItem(0, 5, new QStandardItem("男"));

    ui->tableView3_1->setModel(model);
    ui->tableView3_1->show();

    ui->tableView3_2->setSortingEnabled(true);
    model = new QStandardItemModel(this);
    QStringList label = QObject::trUtf8("编号,处方,医生编号,病人编号").simplified().split(",");
    model->setHorizontalHeaderLabels(label);

    model->setItem(0, 0, new QStandardItem("32"));
    model->setItem(0, 1, new QStandardItem("阿莫西林"));
    model->setItem(0, 2, new QStandardItem("1"));
    model->setItem(0, 3, new QStandardItem("4"));

    model->setItem(1, 0, new QStandardItem("19"));
    model->setItem(1, 1, new QStandardItem("治疗"));
    model->setItem(1, 2, new QStandardItem("1"));
    model->setItem(1, 3, new QStandardItem("4"));

    model->setItem(2, 0, new QStandardItem("41"));
    model->setItem(2, 1, new QStandardItem("打针"));
    model->setItem(2, 2, new QStandardItem("1"));
    model->setItem(2, 3, new QStandardItem("4"));

    ui->tableView3_2->setModel(model);
    ui->tableView3_2->show();
}

MainWindow3::~MainWindow3()
{
    delete ui;
}

void MainWindow3::on_pushButtonSubmit_clicked()
{
    QMessageBox::about(NULL,  "提示",  "开药成功！");
}
