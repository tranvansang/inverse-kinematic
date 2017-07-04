/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *angleStepText;
    QPushButton *speedUpButton;
    QPushButton *speedDownButton;
    QLabel *currentSpeedLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *speedStepText;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *animateCheckBox;
    QLabel *label_8;
    QLineEdit *frameRateText;
    QPushButton *applyButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(676, 747);
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
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 570, 262, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        angleStepText = new QLineEdit(layoutWidget);
        angleStepText->setObjectName(QString::fromUtf8("angleStepText"));

        horizontalLayout->addWidget(angleStepText);

        speedUpButton = new QPushButton(centralWidget);
        speedUpButton->setObjectName(QString::fromUtf8("speedUpButton"));
        speedUpButton->setGeometry(QRect(20, 640, 89, 25));
        speedDownButton = new QPushButton(centralWidget);
        speedDownButton->setObjectName(QString::fromUtf8("speedDownButton"));
        speedDownButton->setGeometry(QRect(130, 640, 89, 25));
        currentSpeedLabel = new QLabel(centralWidget);
        currentSpeedLabel->setObjectName(QString::fromUtf8("currentSpeedLabel"));
        currentSpeedLabel->setGeometry(QRect(240, 640, 67, 17));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(450, 630, 211, 38));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        speedStepText = new QLineEdit(layoutWidget1);
        speedStepText->setObjectName(QString::fromUtf8("speedStepText"));

        horizontalLayout_2->addWidget(speedStepText);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 610, 399, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        animateCheckBox = new QCheckBox(layoutWidget2);
        animateCheckBox->setObjectName(QString::fromUtf8("animateCheckBox"));

        horizontalLayout_3->addWidget(animateCheckBox);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        frameRateText = new QLineEdit(layoutWidget2);
        frameRateText->setObjectName(QString::fromUtf8("frameRateText"));

        horizontalLayout_3->addWidget(frameRateText);

        applyButton = new QPushButton(layoutWidget2);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_3->addWidget(applyButton);

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
        speedUpButton->setText(QApplication::translate("MainWindow", "speed+", 0, QApplication::UnicodeUTF8));
        speedDownButton->setText(QApplication::translate("MainWindow", "speed-", 0, QApplication::UnicodeUTF8));
        currentSpeedLabel->setText(QApplication::translate("MainWindow", "rad/sec", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Speed change step", 0, QApplication::UnicodeUTF8));
        speedStepText->setText(QApplication::translate("MainWindow", "0.5", 0, QApplication::UnicodeUTF8));
        animateCheckBox->setText(QApplication::translate("MainWindow", "Animate", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Frame rate", 0, QApplication::UnicodeUTF8));
        frameRateText->setText(QApplication::translate("MainWindow", "20", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("MainWindow", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
