#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    time = new QTimer(this);
    connect(time, SIGNAL(timeout()), this, SLOT(skinOff()));
    time->start(1000);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::skinOff()
{
    QTime timer = QTime :: currentTime();
    QString stopWatch = timer.toString("00: 00 : 00");
    ui->label->setText(stopWatch);
    //if (time->isActive()){
        ui->label_2->setText("SKIN ON");
        //qDebug() << "Testing";
    //}

}


void MainWindow::on_pushButton_clicked()
{  

    if (time->isActive()){
        time->stop();
        ui->label_2->setText("SKIN OFF");
    }
    else{
        time->start();
    }
}

