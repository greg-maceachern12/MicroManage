/********************************************************************************
** Form generated from reading UI file 'messagesform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESFORM_H
#define UI_MESSAGESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessagesForm
{
public:
    QToolButton *toolButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QComboBox *category;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;

    void setupUi(QWidget *MessagesForm)
    {
        if (MessagesForm->objectName().isEmpty())
            MessagesForm->setObjectName(QString::fromUtf8("MessagesForm"));
        MessagesForm->resize(765, 502);
        toolButton = new QToolButton(MessagesForm);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(20, 10, 51, 51));
        gridLayoutWidget = new QWidget(MessagesForm);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(120, 90, 161, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        category = new QComboBox(MessagesForm);
        category->setObjectName(QString::fromUtf8("category"));
        category->setGeometry(QRect(120, 50, 121, 23));
        gridLayoutWidget_2 = new QWidget(MessagesForm);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(280, 90, 1596, 281));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        gridLayout_2->addWidget(label_5, 6, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);


        retranslateUi(MessagesForm);

        QMetaObject::connectSlotsByName(MessagesForm);
    } // setupUi

    void retranslateUi(QWidget *MessagesForm)
    {
        MessagesForm->setWindowTitle(QApplication::translate("MessagesForm", "Form", nullptr));
        toolButton->setText(QApplication::translate("MessagesForm", "...", nullptr));
        label_2->setText(QApplication::translate("MessagesForm", "Subject", nullptr));
        label_4->setText(QApplication::translate("MessagesForm", "Subject", nullptr));
        label_3->setText(QApplication::translate("MessagesForm", "Subject", nullptr));
        label->setText(QApplication::translate("MessagesForm", "Subect", nullptr));
        label_7->setText(QApplication::translate("MessagesForm", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor", nullptr));
        label_6->setText(QApplication::translate("MessagesForm", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor", nullptr));
        label_5->setText(QApplication::translate("MessagesForm", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor", nullptr));
        label_8->setText(QApplication::translate("MessagesForm", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessagesForm: public Ui_MessagesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESFORM_H
