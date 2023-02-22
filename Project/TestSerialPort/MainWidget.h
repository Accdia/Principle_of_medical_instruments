#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

class QSerialPort;

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

    void initSerial();
    void initMainUi();

    void openSerial();
    void closeSerial();
    void refreshSerial();

private:
    QStringList getSerialPortNames();
    void setSerialEnable(bool enabled);
    void sendData();
    void recvData();

private:
    Ui::MainWidget *ui;

    QSerialPort *serialIo;
};

#endif // MAINWIDGET_H
