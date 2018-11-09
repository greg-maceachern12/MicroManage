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
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QToolButton *toolButton;

    void setupUi(QWidget *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName(QStringLiteral("SettingsForm"));
        SettingsForm->resize(689, 547);
        pushButton_3 = new QPushButton(SettingsForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 190, 271, 51));
        pushButton_3->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        pushButton_4 = new QPushButton(SettingsForm);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 120, 271, 51));
        pushButton_4->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 15px;"));
        label_2 = new QLabel(SettingsForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 70, 691, 41));
        label_2->setStyleSheet(QLatin1String("font-family: \"Avenir Next\";\n"
"font-size: 24px;\n"
"color: #F26552;"));
        label_2->setAlignment(Qt::AlignCenter);
        toolButton = new QToolButton(SettingsForm);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(20, 10, 51, 51));

        retranslateUi(SettingsForm);

        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QWidget *SettingsForm)
    {
        SettingsForm->setWindowTitle(QApplication::translate("SettingsForm", "Form", nullptr));
        pushButton_3->setText(QApplication::translate("SettingsForm", "Have Questions? Reach Out!", nullptr));
        pushButton_4->setText(QApplication::translate("SettingsForm", "Forgot Password", nullptr));
        label_2->setText(QApplication::translate("SettingsForm", "Settings", nullptr));
        toolButton->setText(QApplication::translate("SettingsForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
