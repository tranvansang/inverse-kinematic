/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtCore/QVariant>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "kinematicswidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    KinematicsWidget *kinematicsWidget;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *nextLinkageButton;
    QPushButton *plusAngleButton;
    QPushButton *minusAngleButton;
    QLabel *label_6;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *angleStepText;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(676, 663);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        kinematicsWidget = new KinematicsWidget(centralWidget);
        kinematicsWidget->setObjectName(QString::fromUtf8("kinematicsWidget"));
        kinematicsWidget->setGeometry(QRect(10, 110, 651, 351));
        kinematicsWidget->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 261, 17));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(310, 490, 341, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 20, 221, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 50, 211, 17));
        nextLinkageButton = new QPushButton(centralWidget);
        nextLinkageButton->setObjectName(QString::fromUtf8("nextLinkageButton"));
        nextLinkageButton->setGeometry(QRect(10, 490, 111, 25));
        plusAngleButton = new QPushButton(centralWidget);
        plusAngleButton->setObjectName(QString::fromUtf8("plusAngleButton"));
        plusAngleButton->setGeometry(QRect(10, 530, 89, 25));
        minusAngleButton = new QPushButton(centralWidget);
        minusAngleButton->setObjectName(QString::fromUtf8("minusAngleButton"));
        minusAngleButton->setGeometry(QRect(120, 530, 89, 25));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 520, 321, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 570, 262, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        angleStepText = new QLineEdit(widget);
        angleStepText->setObjectName(QString::fromUtf8("angleStepText"));

        horizontalLayout->addWidget(angleStepText);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 676, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Inverse Kinematics implementation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Click on screen to activate inverse kinetics mode", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Student name: Tran Van Sang", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Student No.: 05-161023", 0, QApplication::UnicodeUTF8));
        nextLinkageButton->setText(QApplication::translate("MainWindow", "Next Linkage", 0, QApplication::UnicodeUTF8));
        plusAngleButton->setText(QApplication::translate("MainWindow", "angle+", 0, QApplication::UnicodeUTF8));
        minusAngleButton->setText(QApplication::translate("MainWindow", "angle-", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "It is recommended to click multiple times", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Angle step (deg)", 0, QApplication::UnicodeUTF8));
        angleStepText->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
