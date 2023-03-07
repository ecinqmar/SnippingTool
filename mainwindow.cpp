#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Displayfuncs/opencvfiles.hpp"
#include <string>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Main Window Opened";
}

MainWindow::~MainWindow()
{
    delete ui;
    qDebug() << "Main Window Deleted";
}


void MainWindow::on_pushButton_clicked()
{
    TakeX11DisplayScreenshot();
    qDebug() << "Button Clicked";
}

void MainWindow::on_pushButton_pressed()
{
    TakeX11DisplayScreenshot();
    qDebug() << "Button Pressed";
}
