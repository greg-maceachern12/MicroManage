/********************************************************************************
** Form generated from reading UI file 'noticesform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICESFORM_H
#define UI_NOTICESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoticesForm
{
public:
    QToolButton *menuButton;
    QLabel *headerLabel;
    QWidget *Notices;
    QTableView *tableView;
    QToolButton *btnRefresh;
    QPushButton *btnCreate;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtNotice;
    QLineEdit *txtDate;

    void setupUi(QWidget *NoticesForm)
    {
        if (NoticesForm->objectName().isEmpty())
            NoticesForm->setObjectName(QStringLiteral("NoticesForm"));
        NoticesForm->resize(829, 590);
        menuButton = new QToolButton(NoticesForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        headerLabel = new QLabel(NoticesForm);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(150, 20, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        Notices = new QWidget(NoticesForm);
        Notices->setObjectName(QStringLiteral("Notices"));
        Notices->setGeometry(QRect(0, 0, 829, 590));
        tableView = new QTableView(Notices);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(145, 111, 541, 331));
        btnRefresh = new QToolButton(Notices);
        btnRefresh->setObjectName(QStringLiteral("btnRefresh"));
        btnRefresh->setGeometry(QRect(690, 70, 45, 45));
        btnCreate = new QPushButton(Notices);
        btnCreate->setObjectName(QStringLiteral("btnCreate"));
        btnCreate->setGeometry(QRect(600, 480, 91, 51));
        label = new QLabel(Notices);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 460, 59, 31));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(Notices);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 510, 59, 31));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        txtNotice = new QLineEdit(Notices);
        txtNotice->setObjectName(QStringLiteral("txtNotice"));
        txtNotice->setGeometry(QRect(270, 460, 301, 31));
        txtDate = new QLineEdit(Notices);
        txtDate->setObjectName(QStringLiteral("txtDate"));
        txtDate->setGeometry(QRect(270, 510, 301, 31));
        Notices->raise();
        menuButton->raise();
        headerLabel->raise();

        retranslateUi(NoticesForm);

        QMetaObject::connectSlotsByName(NoticesForm);
    } // setupUi

    void retranslateUi(QWidget *NoticesForm)
    {
        NoticesForm->setWindowTitle(QApplication::translate("NoticesForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("NoticesForm", "...", nullptr));
        headerLabel->setText(QApplication::translate("NoticesForm", "Notices", nullptr));
        btnRefresh->setText(QApplication::translate("NoticesForm", "R", nullptr));
        btnCreate->setText(QApplication::translate("NoticesForm", "Submit", nullptr));
        label->setText(QApplication::translate("NoticesForm", "Notice", nullptr));
        label_2->setText(QApplication::translate("NoticesForm", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticesForm: public Ui_NoticesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICESFORM_H
