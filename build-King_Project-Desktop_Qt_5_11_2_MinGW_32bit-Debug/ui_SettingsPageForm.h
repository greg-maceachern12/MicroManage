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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsPage
{
public:
    QToolButton *toolButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *SettingsPage)
    {
        if (SettingsPage->objectName().isEmpty())
            SettingsPage->setObjectName(QStringLiteral("SettingsPage"));
        SettingsPage->resize(647, 487);
        toolButton = new QToolButton(SettingsPage);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 10, 51, 51));
        verticalLayoutWidget = new QWidget(SettingsPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 100, 201, 131));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(SettingsPage);

        QMetaObject::connectSlotsByName(SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SettingsPage)
    {
        SettingsPage->setWindowTitle(QApplication::translate("SettingsPage", "HEY", nullptr));
        toolButton->setText(QApplication::translate("SettingsPage", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPAGEFORM_H
