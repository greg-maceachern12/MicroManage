/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(689, 547);
        pushButton_3 = new QPushButton(Settings);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 190, 271, 51));
        pushButton_3->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        pushButton_4 = new QPushButton(Settings);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 130, 271, 51));
        pushButton_4->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 70, 91, 41));
        label_2->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 24px;\n"
"color: #F26552;"));
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", nullptr));
        pushButton_3->setText(QApplication::translate("Settings", "Have Questions? Reach Out!", nullptr));
        pushButton_4->setText(QApplication::translate("Settings", "Forgot Password", nullptr));
        label_2->setText(QApplication::translate("Settings", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
