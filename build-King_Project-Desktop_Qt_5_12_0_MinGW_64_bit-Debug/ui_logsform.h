/********************************************************************************
** Form generated from reading UI file 'logsform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSFORM_H
#define UI_LOGSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogsForm
{
public:
    QLabel *label;
    QPushButton *refresh;
    QTableView *tableView;

    void setupUi(QWidget *LogsForm)
    {
        if (LogsForm->objectName().isEmpty())
            LogsForm->setObjectName(QString::fromUtf8("LogsForm"));
        LogsForm->resize(611, 457);
        label = new QLabel(LogsForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 281, 51));
        label->setAlignment(Qt::AlignCenter);
        refresh = new QPushButton(LogsForm);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(10, 10, 51, 32));
        tableView = new QTableView(LogsForm);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(80, 60, 491, 371));

        retranslateUi(LogsForm);

        QMetaObject::connectSlotsByName(LogsForm);
    } // setupUi

    void retranslateUi(QWidget *LogsForm)
    {
        LogsForm->setWindowTitle(QApplication::translate("LogsForm", "Form", nullptr));
        label->setText(QApplication::translate("LogsForm", "Logs", nullptr));
        refresh->setText(QApplication::translate("LogsForm", "R", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogsForm: public Ui_LogsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSFORM_H
