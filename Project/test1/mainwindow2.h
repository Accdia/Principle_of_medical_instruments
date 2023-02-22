#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QModelIndex>

#include <mainwindow.h>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_pushButtonDetermine_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::MainWindow2 *ui;
    QStandardItemModel* model;//创建一个model的值
};

#endif // MAINWINDOW2_H
