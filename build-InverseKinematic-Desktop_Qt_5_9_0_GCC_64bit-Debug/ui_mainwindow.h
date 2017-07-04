/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(676, 663);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        kinematicsWidget = new KinematicsWidget(centralWidget);
        kinematicsWidget->setObjectName(QStringLiteral("kinematicsWidget"));
        kinematicsWidget->setGeometry(QRect(10, 110, 651, 351));
        kinematicsWidget->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 261, 17));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 490, 341, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 20, 221, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 50, 211, 17));
        nextLinkageButton = new QPushButton(centralWidget);
        nextLinkageButton->setObjectName(QStringLiteral("nextLinkageButton"));
        nextLinkageButton->setGeometry(QRect(10, 490, 111, 25));
        plusAngleButton = new QPushButton(centralWidget);
        plusAngleButton->setObjectName(QStringLiteral("plusAngleButton"));
        plusAngleButton->setGeometry(QRect(10, 530, 89, 25));
        minusAngleButton = new QPushButton(centralWidget);
        minusAngleButton->setObjectName(QStringLiteral("minusAngleButton"));
        minusAngleButton->setGeometry(QRect(120, 530, 89, 25));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 520, 321, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 570, 262, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        angleStepText = new QLineEdit(widget);
        angleStepText->setObjectName(QStringLiteral("angleStepText"));

        horizontalLayout->addWidget(angleStepText);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 676, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Inverse Kinematics implementation", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Click on screen to activate inverse kinetics mode", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Student name: Tran Van Sang", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Student No.: 05-161023", Q_NULLPTR));
        nextLinkageButton->setText(QApplication::translate("MainWindow", "Next Linkage", Q_NULLPTR));
        plusAngleButton->setText(QApplication::translate("MainWindow", "angle+", Q_NULLPTR));
        minusAngleButton->setText(QApplication::translate("MainWindow", "angle-", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "It is recommended to click multiple times", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Angle step (deg)", Q_NULLPTR));
        angleStepText->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
