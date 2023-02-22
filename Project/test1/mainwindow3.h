#ifndef MAINWINDOW3_H
#define MAINWINDOW3_H

#include <QMainWindow>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QModelIndex>

#include <mainwindow.h>

namespace Ui {
class MainWindow3;
}

#pragma execution_character_set("utf-8")
class MainWindow3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = nullptr);
    ~MainWindow3();

private slots:
    void on_pushButtonSubmit_clicked();

private:
    Ui::MainWindow3 *ui;
    QStandardItemModel* model;//创建一个model的值
};

#endif // MAINWINDOW3_H
