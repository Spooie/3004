/********************************************************************************
** Form generated from reading UI file 'programs.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMS_H
#define UI_PROGRAMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Programs
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Programs)
    {
        if (Programs->objectName().isEmpty())
            Programs->setObjectName(QString::fromUtf8("Programs"));
        Programs->resize(426, 300);
        centralWidget = new QWidget(Programs);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 50, 101, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 91, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 110, 101, 41));
        Programs->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Programs);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 426, 22));
        Programs->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Programs);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Programs->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Programs);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Programs->setStatusBar(statusBar);

        retranslateUi(Programs);

        QMetaObject::connectSlotsByName(Programs);
    } // setupUi

    void retranslateUi(QMainWindow *Programs)
    {
        Programs->setWindowTitle(QCoreApplication::translate("Programs", "Programs", nullptr));
        pushButton->setText(QCoreApplication::translate("Programs", "Programs", nullptr));
        label->setText(QCoreApplication::translate("Programs", "  Main Menu", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Programs", "Frequency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Programs: public Ui_Programs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMS_H
