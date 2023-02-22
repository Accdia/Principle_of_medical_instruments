#include "MainWidget.h"
#include "ui_MainWidget.h"

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QListView>

#include <QDebug>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    initSerial();
    initMainUi();
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::initSerial()
{
    serialIo=new QSerialPort(this);

    connect(serialIo,&QSerialPort::readyRead,this,&MainWidget::recvData);

    refreshSerial();
    ui->boxPortName->setView(new QListView(this));
    //波特率
    QStringList baudrateList;
    baudrateList<<"1200"<<"2400"<<"4800"<<"9600"<<"19200"<<"38400"<<"57600"<<"115200";
    ui->boxBaudRate->addItems(baudrateList);//添加下拉列表选项
    ui->boxBaudRate->setEditable(true);//串口波特率可编辑
    ui->boxBaudRate->setCurrentText("115200");//界面中初始值
    ui->boxBaudRate->setView(new QListView(this));
    QStringList databitList;
    databitList<<"5"<<"6"<<"7"<<"8";
    ui->boxDataBits->addItems(databitList);
    ui->boxDataBits->setCurrentText("8");
    ui->boxDataBits->setView(new QListView(this));
    //校验位
    QStringList parityList;
    parityList<<"No"<<"Even偶"<<"Odd奇"<<"Space"<<"Mark";
    ui->boxParity->addItems(parityList);
    ui->boxParity->setCurrentText("No");
    ui->boxParity->setView(new QListView(this));
    //停止位
    QStringList stopbitList;
    stopbitList<<"1"<<"1.5"<<"2";
    ui->boxStopBits->addItems(stopbitList);
    ui->boxStopBits->setCurrentText("1");
    ui->boxStopBits->setView(new QListView(this));
    //流控制
    QStringList flowctrlList;
    flowctrlList<<"No"<<"Hardware"<<"Software";
    ui->boxFlowControl->addItems(flowctrlList);
    ui->boxFlowControl->setCurrentText("No");
    ui->boxFlowControl->setView(new QListView(this));
}

void MainWidget::initMainUi()
{
    //点击串口[开启]/[关闭]按钮
    connect(ui->btnOpen,&QPushButton::clicked,this,[this](){
        if(ui->btnOpen->text()=="打开"){
            openSerial();
        }else{
            closeSerial();
        }
    });
    //点击串口[刷新]按钮-刷新串口名列表
    connect(ui->btnRefresh,&QPushButton::clicked,this,&MainWidget::refreshSerial);
    //点击数据[发送]按钮
    connect(ui->btnSend,&QPushButton::clicked,this,&MainWidget::sendData);
}

void MainWidget::openSerial()
{
    const QString portnameStr=ui->boxPortName->currentText();
    if(!portnameStr.isEmpty()){
        QSerialPortInfo info(portnameStr);
        if(info.isBusy()){
            qDebug()<<"当前串口繁忙,可能已被占用,请确认后再连接"<<portnameStr;
            return;
        }
        //
        qint32 baudrate=ui->boxBaudRate->currentText().toInt();
        QSerialPort::DataBits databit;
        switch (ui->boxDataBits->currentIndex()) {
        case 0:databit=QSerialPort::Data5; break;
        case 1:databit=QSerialPort::Data6; break;
        case 2:databit=QSerialPort::Data7; break;
        case 3:databit=QSerialPort::Data8; break;
        default:databit=QSerialPort::Data8; break;
        }
        QSerialPort::Parity parity;
        switch (ui->boxParity->currentIndex()) {
        case 0:parity=QSerialPort::NoParity; break;
        case 1:parity=QSerialPort::EvenParity; break;
        case 2:parity=QSerialPort::OddParity; break;
        case 3:parity=QSerialPort::SpaceParity; break;
        case 4:parity=QSerialPort::MarkParity; break;
        default:parity=QSerialPort::NoParity; break;
        }
        QSerialPort::StopBits stopbit;
        switch (ui->boxStopBits->currentIndex()) {
        case 0:stopbit=QSerialPort::OneStop; break;
        case 1:stopbit=QSerialPort::OneAndHalfStop; break;
        case 2:stopbit=QSerialPort::TwoStop; break;
        default:stopbit=QSerialPort::OneStop; break;
        }
        QSerialPort::FlowControl flowcontrol;
        switch (ui->boxFlowControl->currentIndex()) {
        case 0:flowcontrol=QSerialPort::NoFlowControl; break;
        case 1:flowcontrol=QSerialPort::HardwareControl; break;
        case 2:flowcontrol=QSerialPort::SoftwareControl; break;
        default:flowcontrol=QSerialPort::NoFlowControl; break;
        }
        //串口配置设置
        serialIo->setPortName(portnameStr);
        serialIo->setBaudRate(baudrate);
        serialIo->setDataBits(databit);
        serialIo->setParity(parity);
        serialIo->setStopBits(stopbit);
        serialIo->setFlowControl(flowcontrol);
        if(serialIo->open(QIODevice::ReadWrite)){
            qDebug()<<"串口已打开,读写模式";
            setSerialEnable(false);//改变ui状态
        }else{
            qDebug()<<"串口打开异常"<<portnameStr<<serialIo->errorString();
            serialIo->clearError();
            setSerialEnable(true);
        }
    }else{
        qDebug()<<"未找到可用串口,请确认串口连接正常后点击刷新";
    }
}

void MainWidget::closeSerial()
{
    serialIo->clear();
    serialIo->close();
    qDebug()<<"串口已关闭";
    setSerialEnable(true);
}

void MainWidget::refreshSerial()
{
    ui->boxPortName->clear();
    ui->boxPortName->addItems(getSerialPortNames());
}

QStringList MainWidget::getSerialPortNames()
{
    QStringList slist;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        //检测是否可用
        if(!info.isBusy())
            slist<<info.portName();
    }
    if(slist.isEmpty()){
        qDebug()<<"未找到可用串口,请确认串口连接正常后点击刷新";
    }
    return slist;
}

void MainWidget::setSerialEnable(bool enabled)
{
    //打开成功就false不能再修改配置，关闭状态true可以进行设置
    ui->btnRefresh->setEnabled(enabled);
    ui->btnOpen->setText(enabled?QString("打开"):QString("关闭"));
    ui->boxPortName->setEnabled(enabled);
    ui->boxBaudRate->setEnabled(enabled);
    ui->boxDataBits->setEnabled(enabled);
    ui->boxParity->setEnabled(enabled);
    ui->boxStopBits->setEnabled(enabled);
    ui->boxFlowControl->setEnabled(enabled);
}

void MainWidget::sendData()
{
    const QByteArray send_data=ui->textSend->toPlainText().toUtf8();
    if(send_data.size()<=0)
        return;
    if(serialIo->isOpen()){
        serialIo->write(send_data);
        qDebug()<<"已发送："<<QString::fromUtf8(send_data);
    }else{
        qDebug()<<"发送失败,串口未打开";
        return;
    }
    if(!serialIo->waitForBytesWritten(30000)){
        qDebug()<<"命令发送异常"<<serialIo->errorString();
        serialIo->clearError();
    }
}

void MainWidget::recvData()
{
    if (serialIo->bytesAvailable()) {
        const QByteArray recv_data=serialIo->readAll();
        ui->textRecv->append(QString::fromUtf8(recv_data));
        qDebug()<<"已接收："<<QString::fromUtf8(recv_data);
    }
}
