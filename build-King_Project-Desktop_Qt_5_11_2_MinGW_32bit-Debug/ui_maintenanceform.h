/********************************************************************************
** Form generated from reading UI file 'maintenanceform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCEFORM_H
#define UI_MAINTENANCEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintenanceForm
{
public:
    QToolButton *menuButton;
    QLabel *headerLabel;
    QWidget *Maintenance;

    void setupUi(QWidget *MaintenanceForm)
    {
        if (MaintenanceForm->objectName().isEmpty())
            MaintenanceForm->setObjectName(QStringLiteral("MaintenanceForm"));
        MaintenanceForm->resize(829, 590);
        menuButton = new QToolButton(MaintenanceForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        headerLabel = new QLabel(MaintenanceForm);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(110, 20, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        Maintenance = new QWidget(MaintenanceForm);
        Maintenance->setObjectName(QStringLiteral("Maintenance"));
        Maintenance->setGeometry(QRect(0, 0, 829, 590));
        Maintenance->raise();
        menuButton->raise();
        headerLabel->raise();

        retranslateUi(MaintenanceForm);

        QMetaObject::connectSlotsByName(MaintenanceForm);
    } // setupUi

    void retranslateUi(QWidget *MaintenanceForm)
    {
        MaintenanceForm->setWindowTitle(QApplication::translate("MaintenanceForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("MaintenanceForm", "...", nullptr));
        headerLabel->setText(QApplication::translate("MaintenanceForm", "Maintenance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MaintenanceForm: public Ui_MaintenanceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCEFORM_H
