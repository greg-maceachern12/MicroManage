/********************************************************************************
** Form generated from reading UI file 'settingsform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
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
    QPushButton *questionButton;
    QPushButton *pushButton_4;
    QToolButton *menuButton;
    QLabel *headerLabel;
    QWidget *Settings;

    void setupUi(QWidget *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName(QStringLiteral("SettingsForm"));
        SettingsForm->resize(829, 590);
        questionButton = new QPushButton(SettingsForm);
        questionButton->setObjectName(QStringLiteral("questionButton"));
        questionButton->setGeometry(QRect(290, 290, 271, 51));
        questionButton->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        pushButton_4 = new QPushButton(SettingsForm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(290, 220, 271, 51));
        pushButton_4->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        menuButton = new QToolButton(SettingsForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        headerLabel = new QLabel(SettingsForm);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(300, 160, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        Settings = new QWidget(SettingsForm);
        Settings->setObjectName(QStringLiteral("Settings"));
        Settings->setGeometry(QRect(0, 0, 829, 590));
        Settings->raise();
        questionButton->raise();
        pushButton_4->raise();
        menuButton->raise();
        headerLabel->raise();

        retranslateUi(SettingsForm);

        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QWidget *SettingsForm)
    {
        SettingsForm->setWindowTitle(QApplication::translate("SettingsForm", "Form", nullptr));
        questionButton->setText(QApplication::translate("SettingsForm", "Have Questions? Reach Out!", nullptr));
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
