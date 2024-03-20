#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap coffee_icon(":/assets/icons/coffee.png");
    //ui->iconsBox->setPixmap(coffee_icon.scaled(100,100,Qt::KeepAspectRatio));
}



MainWindow::~MainWindow()
{
    delete ui;
}
