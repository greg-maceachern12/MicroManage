/********************************************************************************
** Form generated from reading UI file 'settingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFORM_H
#define UI_SETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsForm
{
public:
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QToolButton *menuButton;
    QLabel *headerLabel;

    void setupUi(QWidget *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName(QString::fromUtf8("SettingsForm"));
        SettingsForm->resize(829, 590);
        pushButton_3 = new QPushButton(SettingsForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 290, 271, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        pushButton_4 = new QPushButton(SettingsForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 220, 271, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        menuButton = new QToolButton(SettingsForm);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        headerLabel = new QLabel(SettingsForm);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        headerLabel->setGeometry(QRect(300, 160, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);

        retranslateUi(SettingsForm);

        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QWidget *SettingsForm)
    {
        SettingsForm->setWindowTitle(QApplication::translate("SettingsForm", "Form", nullptr));
        pushButton_3->setText(QApplication::translate("SettingsForm", "Have Questions? Reach Out!", nullptr));
        pushButton_4->setText(QApplication::translate("SettingsForm", "Forgot Password", nullptr));
        menuButton->setText(QApplication::translate("SettingsForm", "...", nullptr));
        headerLabel->setText(QApplication::translate("SettingsForm", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
