/********************************************************************************
** Form generated from reading UI file 'MessagesPageForm.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESPAGEFORM_H
#define UI_MESSAGESPAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsPage
{
public:
    QToolButton *toolButton;
    QLabel *mS1;

    void setupUi(QWidget *SettingsPage)
    {
        if (SettingsPage->objectName().isEmpty())
            SettingsPage->setObjectName(QStringLiteral("SettingsPage"));
        SettingsPage->resize(647, 487);
        toolButton = new QToolButton(SettingsPage);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 10, 51, 51));
        mS1 = new QLabel(SettingsPage);
        mS1->setObjectName(QStringLiteral("mS1"));
        mS1->setGeometry(QRect(110, 60, 151, 31));

        retranslateUi(SettingsPage);

        QMetaObject::connectSlotsByName(SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *SettingsPage)
    {
        SettingsPage->setWindowTitle(QApplication::translate("SettingsPage", "HEY", nullptr));
        toolButton->setText(QApplication::translate("SettingsPage", "...", nullptr));
        mS1->setText(QApplication::translate("SettingsPage", "Subject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESPAGEFORM_H
