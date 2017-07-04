#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_nextLinkageButton_clicked();

    void on_plusAngleButton_clicked();

    void on_minusAngleButton_clicked();

    void on_animateCheckBox_clicked(bool checked);

    void on_speedUpButton_clicked();

    void on_applyButton_clicked();

    void on_speedDownButton_clicked();

private:
    Ui::MainWindow *ui;
    float getAngle();
    QTimer animationTimer;
    void animationTimerFired();
    int fps;
    void updateSpeedLabel();
};

#endif // MAINWINDOW_H
