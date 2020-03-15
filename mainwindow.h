#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Program.h"
#include <QMainWindow>
#include "Counter.h"
class QLCDNumber;
class QPushButton;


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
   // void setProgram(Program*);

private slots:




    void showTime();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();



private:
    Ui::MainWindow *ui;



   // Program* program;
};
#endif // MAINWINDOW_H
