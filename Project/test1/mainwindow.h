#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QModelIndex>

#include <mainwindow2.h>
#include <mainwindow3.h>

namespace Ui {
class MainWindow;
}

#pragma execution_character_set("utf-8")
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonDrug_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel* model;//创建一个model的值
};

#endif // MAINWINDOW_H
