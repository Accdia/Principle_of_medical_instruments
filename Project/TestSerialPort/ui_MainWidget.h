#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labPortName;
    QComboBox *boxPortName;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labBaudRate;
    QComboBox *boxBaudRate;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labDataBits;
    QComboBox *boxDataBits;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labParity;
    QComboBox *boxParity;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labStopBits;
    QComboBox *boxStopBits;
    QHBoxLayout *horizontalLayout_14;
    QLabel *labFlowControl;
    QComboBox *boxFlowControl;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btnRefresh;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnOpen;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *labRecv;
    QTextEdit *textRecv;
    QLabel *labSend;
    QTextEdit *textSend;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSend;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(671, 433);
        horizontalLayout_16 = new QHBoxLayout(MainWidget);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labPortName = new QLabel(MainWidget);
        labPortName->setObjectName(QStringLiteral("labPortName"));
        labPortName->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(labPortName);

        boxPortName = new QComboBox(MainWidget);
        boxPortName->setObjectName(QStringLiteral("boxPortName"));

        horizontalLayout_9->addWidget(boxPortName);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labBaudRate = new QLabel(MainWidget);
        labBaudRate->setObjectName(QStringLiteral("labBaudRate"));
        labBaudRate->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(labBaudRate);

        boxBaudRate = new QComboBox(MainWidget);
        boxBaudRate->setObjectName(QStringLiteral("boxBaudRate"));

        horizontalLayout_10->addWidget(boxBaudRate);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labDataBits = new QLabel(MainWidget);
        labDataBits->setObjectName(QStringLiteral("labDataBits"));
        labDataBits->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(labDataBits);

        boxDataBits = new QComboBox(MainWidget);
        boxDataBits->setObjectName(QStringLiteral("boxDataBits"));

        horizontalLayout_11->addWidget(boxDataBits);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        labParity = new QLabel(MainWidget);
        labParity->setObjectName(QStringLiteral("labParity"));
        labParity->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(labParity);

        boxParity = new QComboBox(MainWidget);
        boxParity->setObjectName(QStringLiteral("boxParity"));

        horizontalLayout_12->addWidget(boxParity);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        labStopBits = new QLabel(MainWidget);
        labStopBits->setObjectName(QStringLiteral("labStopBits"));
        labStopBits->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(labStopBits);

        boxStopBits = new QComboBox(MainWidget);
        boxStopBits->setObjectName(QStringLiteral("boxStopBits"));

        horizontalLayout_13->addWidget(boxStopBits);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        labFlowControl = new QLabel(MainWidget);
        labFlowControl->setObjectName(QStringLiteral("labFlowControl"));
        labFlowControl->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(labFlowControl);

        boxFlowControl = new QComboBox(MainWidget);
        boxFlowControl->setObjectName(QStringLiteral("boxFlowControl"));

        horizontalLayout_14->addWidget(boxFlowControl);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        btnRefresh = new QPushButton(MainWidget);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));

        horizontalLayout_15->addWidget(btnRefresh);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);

        btnOpen = new QPushButton(MainWidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));

        horizontalLayout_15->addWidget(btnOpen);


        verticalLayout_2->addLayout(horizontalLayout_15);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_16->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labRecv = new QLabel(MainWidget);
        labRecv->setObjectName(QStringLiteral("labRecv"));

        verticalLayout->addWidget(labRecv);

        textRecv = new QTextEdit(MainWidget);
        textRecv->setObjectName(QStringLiteral("textRecv"));

        verticalLayout->addWidget(textRecv);

        labSend = new QLabel(MainWidget);
        labSend->setObjectName(QStringLiteral("labSend"));

        verticalLayout->addWidget(labSend);

        textSend = new QTextEdit(MainWidget);
        textSend->setObjectName(QStringLiteral("textSend"));

        verticalLayout->addWidget(textSend);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSend = new QPushButton(MainWidget);
        btnSend->setObjectName(QStringLiteral("btnSend"));

        horizontalLayout->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_16->addLayout(verticalLayout);

        horizontalLayout_16->setStretch(1, 1);

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", Q_NULLPTR));
        labPortName->setText(QApplication::translate("MainWidget", "\344\270\262\345\217\243\345\220\215\357\274\232", Q_NULLPTR));
        labBaudRate->setText(QApplication::translate("MainWidget", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        labDataBits->setText(QApplication::translate("MainWidget", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        labParity->setText(QApplication::translate("MainWidget", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        labStopBits->setText(QApplication::translate("MainWidget", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        labFlowControl->setText(QApplication::translate("MainWidget", "\346\265\201\346\216\247\345\210\266\357\274\232", Q_NULLPTR));
        btnRefresh->setText(QApplication::translate("MainWidget", "\345\210\267\346\226\260", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("MainWidget", "\346\211\223\345\274\200", Q_NULLPTR));
        labRecv->setText(QApplication::translate("MainWidget", "\346\216\245\346\224\266\357\274\232", Q_NULLPTR));
        labSend->setText(QApplication::translate("MainWidget", "\345\217\221\351\200\201\357\274\232", Q_NULLPTR));
        btnSend->setText(QApplication::translate("MainWidget", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
