/********************************************************************************
** Form generated from reading UI file 'SettingsPageForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPAGEFORM_H
#define UI_SETTINGSPAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsPage
{
public:
    QToolButton *toolButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;

    void setupUi(QWidget *SettingsPage)
    {
        if (SettingsPage->objectName().isEmpty())
            SettingsPage->setObjectName(QStringLiteral("SettingsPage"));
        SettingsPage->resize(647, 487);
        toolButton = new QToolButton(SettingsPage);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 10, 51, 51));
        label = new QLabel(SettingsPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 50, 171, 41));
        label_2 = new QLabel(SettingsPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 90, 171, 41));
        label_3 = new QLabel(SettingsPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 130, 171, 41));
        label_4 = new QLabel(SettingsPage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 160, 181, 61));
        checkBox = new QCheckBox(SettingsPage);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(360, 70, 78, 21));
        checkBox_2 = new QCheckBox(SettingsPage);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(360, 100, 78, 21));
        checkBox_3 = new QCheckBox(SettingsPage);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(360, 130, 78, 21));
        checkBox_4 = new QCheckBox(SettingsPage);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(360, 160, 78, 21));

        retranslateUi(SettingsPage);

        QMetaObject::connectSlotsByName(SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SettingsPage)
    {
        SettingsPage->setWindowTitle(QApplication::translate("SettingsPage", "HEY", nullptr));
        toolButton->setText(QApplication::translate("SettingsPage", "...", nullptr));
        label->setText(QApplication::translate("SettingsPage", "Notifications", nullptr));
        label_2->setText(QApplication::translate("SettingsPage", "Keep me Logged In", nullptr));
        label_3->setText(QApplication::translate("SettingsPage", "Setting #3", nullptr));
        label_4->setText(QApplication::translate("SettingsPage", "Setting #4", nullptr));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        checkBox_3->setText(QString());
        checkBox_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPAGEFORM_H
