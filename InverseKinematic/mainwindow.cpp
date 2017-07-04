#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    animationTimer(this),
    fps(20)

{
    ui->setupUi(this);
    connect(&animationTimer, &QTimer::timeout, this, &KinematicsModel::animationTimerFired);
}

void KinematicsModel::animationTimerFired(){
    ui->kinematicsWidget->kinmaticModel.nextAnimation(fps);
    ui->kinamticsWidget->update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nextLinkageButton_clicked()
{
    ui->kinematicsWidget->kinematicModel.nextLinkage();
    ui->kinematicsWidget->update();
    ui->currentSpeedText.setText(QString("%1 rad/sec").arg(ui->kinematicsWidget->kinematicModel.currentLinkage().speed));
}

float MainWindow::getAngle(){
    return ui->angleStepText->text().toFloat() / 180.f * static_cast<float>(M_PI);
}

void MainWindow::on_plusAngleButton_clicked()
{
    float &angle = ui->kinematicsWidget->kinematicModel.currentLinkage().angle;
    angle = fmod(angle + getAngle(), M_PI * 2);
    ui->kinematicsWidget->update();
}

void MainWindow::on_minusAngleButton_clicked()
{
    float &angle = ui->kinematicsWidget->kinematicModel.currentLinkage().angle;
    angle = fmod(angle - getAngle(), M_PI * 2);
    ui->kinematicsWidget->update();
}

void MainWindow::on_animateCheckBox_clicked(bool checked)
{
    if (checked){
        animationTimer.start();
    }else{
        animationTimer.stop();
    }
}

void MainWindow::on_speedUpButton_clicked()
{
    ui->kinematicsWidget->kinematicModel.currentLinkage().speed += ui->speedRateText.text().toFloat();
}

void MainWindow::on_applyButton_clicked()
{
    fps = ui->frameRateText.text().toInt();
}
