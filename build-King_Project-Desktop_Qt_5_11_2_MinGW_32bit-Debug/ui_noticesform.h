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
    QLabel *noticesLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *NoticesForm)
    {
        if (NoticesForm->objectName().isEmpty())
            NoticesForm->setObjectName(QStringLiteral("NoticesForm"));
        NoticesForm->resize(712, 520);
        menuButton = new QToolButton(NoticesForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(30, 20, 41, 41));
        noticesLabel = new QLabel(NoticesForm);
        noticesLabel->setObjectName(QStringLiteral("noticesLabel"));
        noticesLabel->setGeometry(QRect(120, 20, 241, 51));
        scrollArea = new QScrollArea(NoticesForm);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(100, 90, 541, 391));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 389));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(NoticesForm);

        QMetaObject::connectSlotsByName(NoticesForm);
    } // setupUi

    void retranslateUi(QWidget *NoticesForm)
    {
        NoticesForm->setWindowTitle(QApplication::translate("NoticesForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("NoticesForm", "...", nullptr));
        noticesLabel->setText(QApplication::translate("NoticesForm", "Notices", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticesForm: public Ui_NoticesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICESFORM_H
