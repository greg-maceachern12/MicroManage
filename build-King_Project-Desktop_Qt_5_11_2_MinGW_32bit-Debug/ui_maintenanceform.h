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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaintenanceForm
{
public:

    void setupUi(QWidget *MaintenanceForm)
    {
        if (MaintenanceForm->objectName().isEmpty())
            MaintenanceForm->setObjectName(QStringLiteral("MaintenanceForm"));
        MaintenanceForm->resize(694, 481);

        retranslateUi(MaintenanceForm);

        QMetaObject::connectSlotsByName(MaintenanceForm);
    } // setupUi

    void retranslateUi(QWidget *MaintenanceForm)
    {
        MaintenanceForm->setWindowTitle(QApplication::translate("MaintenanceForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MaintenanceForm: public Ui_MaintenanceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCEFORM_H
