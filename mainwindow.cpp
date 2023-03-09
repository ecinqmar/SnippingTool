#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "Displayfuncs/opencvfiles.hpp"
#include "fileops.hpp"
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
    qDebug() << "Button Clicked";
    TakeX11DisplayScreenshot();
}


void MainWindow::on_SetNewHotkeyButton_clicked()
{
    qDebug() << "Hotkey Button Clicked";

    //grab the input from the textbox in QT

    //dump the data into the file using saveinput
    //SaveInput( );
}
