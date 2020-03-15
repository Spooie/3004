#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QTime>
#include <QTimer>
#include <QDateTime>
#include "Program.h"
#include <QtWidgets>
#include <QListWidgetItem>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
     ui(new Ui::MainWindow)

{

    setWindowTitle(tr("Device State"));

    ui->setupUi(this);
/*
    for(int row = 0 ; row <= 20; ++ row)
    {
       QListWidgetItem *item = new QListWidgetItem("Device: " + QString::number(row));
       item->setCheckState(Qt::Unchecked);
               ui->listWidget->addItem(item);

    }

    setFixedSize(550,700);
*/
   //power level control
   connect(ui->verticalSlider,SIGNAL(valueChanged(int)),
   ui->progressBar,SLOT(setValue(int)));



}

MainWindow::~MainWindow()
{
    delete ui;
}







void MainWindow::showTime()// show time function
{
    QTime time=QTime::currentTime();
        QString time_text=time.toString("hh : mm : ss");

        QDateTime dateTime=QDateTime::currentDateTime();
        QString datetimetext = dateTime.toString("dd-MM-yyyy hh:mm:ss");
        ui ->Digital_clock2 ->setText(datetimetext);

        if (time.second() % 2 == 0)
        {
            time_text.replace(":"," ");

        }

        ui -> Digital_clock2 -> setText((time_text));
}
/*
void MainWindow::setProgram(Program* p)
{
    program = p;
    ui->textEdit->setText(p->print());
}
*/

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->setText("Ok pressed");
/*
//for adding item to the list
    for(int row = 0 ; row <= 20; ++ row)
    {
       QListWidgetItem *item = new QListWidgetItem("Device: " + QString::number(row));
       item->setCheckState(Qt::Unchecked);
               ui->listWidget->addItem(item);

    }
//setting the size of the list
    setFixedSize(550,700);
*/
    int rowCount = ui->listWidget->count();
    QString checkedItems;
    for(int row= 0; row < rowCount ; ++row)
    {
        if(ui->listWidget->item(row)->checkState()==Qt::Checked)
        {
          checkedItems += ui->listWidget->item(row)->text();
        }

    }
    //QMessageBox::information(this,"Info" ,checkedItems);


//program menu
if(checkedItems == "Programs"){
    QString menuItems;
    for(int row = 0 ; row <= 2; ++ row)
    {
    QListWidgetItem *item2 = new QListWidgetItem("Program: " + QString::number(row));
    item2->setCheckState(Qt::Unchecked);

    if(row==0){
    item2->setText("Allergy");
    }

    if(row==1){
    item2->setText("Pain");
    }

    if(row==2){
    item2->setText("Cold");
    }


    ui->listWidget_2->addItem(item2);

     if(ui->listWidget_2->item(row)->checkState()==Qt::Checked)
     {
       menuItems += ui->listWidget_2->item(row)->text()+ " mode is running \n";
     }

    }
    if(menuItems.length()>0){
     QMessageBox::information(this,"Info" ,menuItems);
    }
}

//frequncy menu
if(checkedItems == "Frequency"){
    QString fItems;
    for(int row = 0 ; row <= 6; ++ row)
    {
    QListWidgetItem *item3 = new QListWidgetItem("Program: " + QString::number(row));
    item3->setCheckState(Qt::Unchecked);

    if(row==0){
    item3->setText("1,0-9,9 Hz");
    }

    if(row==1){
    item3->setText("10Hz");
    }

    if(row==2){
    item3->setText("20Hz");
    }

    if(row==3){
    item3->setText("60Hz");
    }
    if(row==4){
    item3->setText("77Hz");
    }
    if(row==5){
    item3->setText("140Hz");
    }
    if(row==6){
    item3->setText("200Hz");
    }


    ui->listWidget_2->addItem(item3);

     if(ui->listWidget_2->item(row)->checkState()==Qt::Checked)
     {
       fItems += ui->listWidget_2->item(row)->text()+ " frequency is turned on \n";
     }

    }
    if(fItems.length()>0){
     QMessageBox::information(this,"Info" ,fItems);
    }
}

//MED menu
if(checkedItems == "MED"){
    QString MItems;
    for(int row = 0 ; row <= 0; ++ row)
    {
    QListWidgetItem *item2 = new QListWidgetItem("Program: " + QString::number(row));
    item2->setCheckState(Qt::Unchecked);

    if(row==0){
    item2->setText("MED");
    }




    ui->listWidget_2->addItem(item2);

     if(ui->listWidget_2->item(row)->checkState()==Qt::Checked)
     {
       MItems += ui->listWidget_2->item(row)->text()+ " mode is turned on \n";
     }

    }
    if(MItems.length()>0){
     QMessageBox::information(this,"Info" ,MItems);
    }
}



}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setText("up");


}

void MainWindow::on_pushButton_7_clicked()
{
    ui->textEdit->setText("return menu");

    //close the window
    close();
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->textEdit->setText("previous action");

    on_pushButton_6_clicked();
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->textEdit->setText("left");
}



void MainWindow::on_pushButton_6_clicked()
{
    ui->textEdit->setText("on/off");
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();
/*
        ui->listWidget->addItem("Programs");
        ui->listWidget->addItem("Frequency");
        ui->listWidget->addItem("MED");
        ui->listWidget->addItem("Screening");
        ui->listWidget->addItem("Children");
        ui->listWidget->addItem("Settings");
*/


    for(int row = 0 ; row <= 5; ++ row)
    {
       QListWidgetItem *item = new QListWidgetItem("Program: " + QString::number(row) );
       item->setCheckState(Qt::Unchecked);
       if(row==0){
       item->setText("Programs");
       }
       if(row == 1)
       {
        item->setText("Frequency");

       }

       if(row == 2)
       {
        item->setText("MED");

       }

       if(row == 3)
       {
        item->setText("Screening");

       }
       if(row == 4)
       {
        item->setText("Children mode");

       }
       if(row == 5)
       {
        item->setText("Settings");

       }
       ui->listWidget->addItem(item);

    }

    setFixedSize(550,700);

}

void MainWindow::on_pushButton_4_clicked()
{
    ui->textEdit->setText("right");

}



void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->setText("down");
}
