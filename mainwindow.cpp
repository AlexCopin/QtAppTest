#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonClose_clicked()
{
    isFullScreen() ? showNormal() : showFullScreen();
    QString text = isFullScreen() ? "Windowed" : "Fullscreen";
    ui->pushButtonClose->setText(text);
}


void MainWindow::on_action_fullscreen_triggered()
{
    isFullScreen() ? showNormal() : showFullScreen();
}


void MainWindow::on_horizontalSlider_opacity_valueChanged(int value)
{
    qDebug("VerticalSlider value == %i", value);
    ui->progressBarOpacity->setValue(value);
    float newOpacity = (float)value/100;
    setWindowOpacity(newOpacity);
}

