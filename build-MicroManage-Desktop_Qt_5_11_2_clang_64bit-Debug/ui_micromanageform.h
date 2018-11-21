/********************************************************************************
** Form generated from reading UI file 'micromanageform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MICROMANAGEFORM_H
#define UI_MICROMANAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MicroManage
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MicroManage)
    {
        if (MicroManage->objectName().isEmpty())
            MicroManage->setObjectName(QStringLiteral("MicroManage"));
        MicroManage->resize(829, 590);
        centralWidget = new QWidget(MicroManage);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MicroManage->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MicroManage);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MicroManage->setStatusBar(statusBar);

        retranslateUi(MicroManage);

        QMetaObject::connectSlotsByName(MicroManage);
    } // setupUi

    void retranslateUi(QMainWindow *MicroManage)
    {
        MicroManage->setWindowTitle(QApplication::translate("MicroManage", "MicroManage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MicroManage: public Ui_MicroManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MICROMANAGEFORM_H
