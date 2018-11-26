#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QImage image("Chinese-peony.jpg");
    ui->imageLabel->setPixmap(QPixmap::fromImage(image));
}

MainWindow::~MainWindow()
{
    delete ui;
}
