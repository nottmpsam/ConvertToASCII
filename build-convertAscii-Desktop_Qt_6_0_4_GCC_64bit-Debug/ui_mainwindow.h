/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLabel *label;
    QPushButton *widthButton;
    QPushButton *imgButton;
    QLabel *label_4;
    QPushButton *outButton;
    QPushButton *startButton;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkA;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineWidth;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineImg;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineOut;
    QCheckBox *checkB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 90, 761, 461));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        widthButton = new QPushButton(gridLayoutWidget);
        widthButton->setObjectName(QString::fromUtf8("widthButton"));

        gridLayout->addWidget(widthButton, 8, 3, 1, 1);

        imgButton = new QPushButton(gridLayoutWidget);
        imgButton->setObjectName(QString::fromUtf8("imgButton"));

        gridLayout->addWidget(imgButton, 6, 3, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 2, 1, 1);

        outButton = new QPushButton(gridLayoutWidget);
        outButton->setObjectName(QString::fromUtf8("outButton"));

        gridLayout->addWidget(outButton, 7, 3, 1, 1);

        startButton = new QPushButton(gridLayoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        gridLayout->addWidget(startButton, 9, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 6, 4, 1, 1);

        checkA = new QCheckBox(gridLayoutWidget);
        checkA->setObjectName(QString::fromUtf8("checkA"));

        gridLayout->addWidget(checkA, 9, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 11, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

        lineWidth = new QLineEdit(gridLayoutWidget);
        lineWidth->setObjectName(QString::fromUtf8("lineWidth"));

        gridLayout->addWidget(lineWidth, 8, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        lineImg = new QLineEdit(gridLayoutWidget);
        lineImg->setObjectName(QString::fromUtf8("lineImg"));

        gridLayout->addWidget(lineImg, 6, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 7, 4, 1, 1);

        lineOut = new QLineEdit(gridLayoutWidget);
        lineOut->setObjectName(QString::fromUtf8("lineOut"));

        gridLayout->addWidget(lineOut, 7, 2, 1, 1);

        checkB = new QCheckBox(gridLayoutWidget);
        checkB->setObjectName(QString::fromUtf8("checkB"));

        gridLayout->addWidget(checkB, 9, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        label->setText(QString());
        widthButton->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        imgButton->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Converting image to Ascii code", nullptr));
        outButton->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "start!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PATH/Image.jpg:", nullptr));
        checkA->setText(QCoreApplication::translate("MainWindow", "1st ascii table", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "PATH/Output.txt:", nullptr));
        checkB->setText(QCoreApplication::translate("MainWindow", "2nd ascii table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
