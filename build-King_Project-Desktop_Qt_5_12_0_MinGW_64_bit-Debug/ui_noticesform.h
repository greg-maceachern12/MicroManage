/********************************************************************************
** Form generated from reading UI file 'noticesform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
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
    QToolButton *addButton;

    void setupUi(QWidget *NoticesForm)
    {
        if (NoticesForm->objectName().isEmpty())
            NoticesForm->setObjectName(QString::fromUtf8("NoticesForm"));
        NoticesForm->resize(829, 590);
        menuButton = new QToolButton(NoticesForm);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        noticesLabel = new QLabel(NoticesForm);
        noticesLabel->setObjectName(QString::fromUtf8("noticesLabel"));
        noticesLabel->setGeometry(QRect(110, 20, 211, 51));
        QFont font;
        font.setPointSize(24);
        noticesLabel->setFont(font);
        scrollArea = new QScrollArea(NoticesForm);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(90, 90, 661, 391));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 659, 389));
        scrollArea->setWidget(scrollAreaWidgetContents);
        addButton = new QToolButton(NoticesForm);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(720, 490, 45, 45));

        retranslateUi(NoticesForm);

        QMetaObject::connectSlotsByName(NoticesForm);
    } // setupUi

    void retranslateUi(QWidget *NoticesForm)
    {
        NoticesForm->setWindowTitle(QApplication::translate("NoticesForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("NoticesForm", "...", nullptr));
        noticesLabel->setText(QApplication::translate("NoticesForm", "Notices", nullptr));
        addButton->setText(QApplication::translate("NoticesForm", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoticesForm: public Ui_NoticesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICESFORM_H
