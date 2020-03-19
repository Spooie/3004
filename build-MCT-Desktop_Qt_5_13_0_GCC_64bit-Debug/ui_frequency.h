/********************************************************************************
** Form generated from reading UI file 'frequency.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREQUENCY_H
#define UI_FREQUENCY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_frequency
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *frequency)
    {
        if (frequency->objectName().isEmpty())
            frequency->setObjectName(QString::fromUtf8("frequency"));
        frequency->resize(400, 300);
        pushButton = new QPushButton(frequency);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 80, 83, 25));
        pushButton_2 = new QPushButton(frequency);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 120, 83, 25));
        label = new QLabel(frequency);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 81, 21));

        retranslateUi(frequency);

        QMetaObject::connectSlotsByName(frequency);
    } // setupUi

    void retranslateUi(QDialog *frequency)
    {
        frequency->setWindowTitle(QCoreApplication::translate("frequency", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("frequency", "0.0 - 10 hz ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("frequency", "11 - 20 hz ", nullptr));
        label->setText(QCoreApplication::translate("frequency", "Frequency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frequency: public Ui_frequency {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREQUENCY_H
