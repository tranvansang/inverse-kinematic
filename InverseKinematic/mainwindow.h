#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    float getAngle();
};

#endif // MAINWINDOW_H
