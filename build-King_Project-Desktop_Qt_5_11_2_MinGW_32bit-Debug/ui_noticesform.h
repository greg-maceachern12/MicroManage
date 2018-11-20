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
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoticesForm
{
public:
    QToolButton *menuButton;
    QLabel *headerLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QToolButton *addButton;
    QWidget *Notices;

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
        headerLabel->setGeometry(QRect(110, 20, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        scrollArea = new QScrollArea(NoticesForm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(90, 90, 661, 391));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 659, 389));
        scrollArea->setWidget(scrollAreaWidgetContents);
        addButton = new QToolButton(NoticesForm);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(720, 490, 45, 45));
        Notices = new QWidget(NoticesForm);
        Notices->setObjectName(QStringLiteral("Notices"));
        Notices->setGeometry(QRect(0, 0, 829, 590));
        Notices->raise();
        menuButton->raise();
        headerLabel->raise();
        scrollArea->raise();
        addButton->raise();

        retranslateUi(NoticesForm);

        QMetaObject::connectSlotsByName(NoticesForm);
    } // setupUi

    void retranslateUi(QWidget *NoticesForm)
    {
        NoticesForm->setWindowTitle(QApplication::translate("NoticesForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("NoticesForm", "...", nullptr));
        headerLabel->setText(QApplication::translate("NoticesForm", "Notices", nullptr));
        addButton->setText(QApplication::translate("NoticesForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticesForm: public Ui_NoticesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICESFORM_H
