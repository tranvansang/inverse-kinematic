#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nextLinkageButton_clicked()
{
    ui->kinematicsWidget->kinematicModel.nextLinkage();
    ui->kinematicsWidget->update();
}

float MainWindow::getAngle(){
    return ui->angleStepText->text().toFloat() / 180.f * static_cast<float>(M_PI);
}

void MainWindow::on_plusAngleButton_clicked()
{
    ui->kinematicsWidget->kinematicModel.currentLinkage().angle += getAngle();
    ui->kinematicsWidget->update();
}

void MainWindow::on_minusAngleButton_clicked()
{
    ui->kinematicsWidget->kinematicModel.currentLinkage().angle -= getAngle();
    ui->kinematicsWidget->update();
}
