/********************************************************************************
** Form generated from reading UI file 'programwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMWINDOW_H
#define UI_PROGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProgramWindow
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *selection;

    void setupUi(QDialog *ProgramWindow)
    {
        if (ProgramWindow->objectName().isEmpty())
            ProgramWindow->setObjectName(QString::fromUtf8("ProgramWindow"));
        ProgramWindow->resize(383, 300);
        pushButton = new QPushButton(ProgramWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 80, 101, 41));
        pushButton_2 = new QPushButton(ProgramWindow);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 150, 101, 41));
        pushButton_3 = new QPushButton(ProgramWindow);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 80, 111, 41));
        pushButton_4 = new QPushButton(ProgramWindow);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 150, 111, 41));
        label = new QLabel(ProgramWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 10, 64, 17));
        selection = new QLabel(ProgramWindow);
        selection->setObjectName(QString::fromUtf8("selection"));
        selection->setGeometry(QRect(120, 250, 131, 17));

        retranslateUi(ProgramWindow);

        QMetaObject::connectSlotsByName(ProgramWindow);
    } // setupUi

    void retranslateUi(QDialog *ProgramWindow)
    {
        ProgramWindow->setWindowTitle(QCoreApplication::translate("ProgramWindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ProgramWindow", "Pain", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ProgramWindow", "Cold", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ProgramWindow", "Trauma", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ProgramWindow", "Head", nullptr));
        label->setText(QCoreApplication::translate("ProgramWindow", "Programs", nullptr));
        selection->setText(QCoreApplication::translate("ProgramWindow", "             ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgramWindow: public Ui_ProgramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMWINDOW_H
