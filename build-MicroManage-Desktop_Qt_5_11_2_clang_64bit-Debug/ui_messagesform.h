/********************************************************************************
** Form generated from reading UI file 'messagesform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESFORM_H
#define UI_MESSAGESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessagesForm
{
public:
    QToolButton *menuButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *category;
    QPushButton *refresh;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label6;
    QLabel *label2;
    QPlainTextEdit *message4;
    QPlainTextEdit *message2;
    QLabel *label5;
    QLabel *label1;
    QLabel *label3;
    QPlainTextEdit *message1;
    QLabel *label4;
    QPlainTextEdit *message5;
    QPlainTextEdit *message6;
    QPlainTextEdit *message3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *to;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *subject;
    QPlainTextEdit *message;
    QVBoxLayout *verticalLayout_4;
    QLabel *error;
    QPushButton *send_message;
    QLabel *headerLabel;
    QWidget *Messages;

    void setupUi(QWidget *MessagesForm)
    {
        if (MessagesForm->objectName().isEmpty())
            MessagesForm->setObjectName(QStringLiteral("MessagesForm"));
        MessagesForm->resize(829, 590);
        menuButton = new QToolButton(MessagesForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        horizontalLayoutWidget = new QWidget(MessagesForm);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 120, 302, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        category = new QComboBox(horizontalLayoutWidget);
        category->setObjectName(QStringLiteral("category"));

        horizontalLayout->addWidget(category);

        refresh = new QPushButton(horizontalLayoutWidget);
        refresh->setObjectName(QStringLiteral("refresh"));

        horizontalLayout->addWidget(refresh);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        gridLayoutWidget = new QWidget(MessagesForm);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(170, 160, 501, 496));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label6 = new QLabel(gridLayoutWidget);
        label6->setObjectName(QStringLiteral("label6"));

        gridLayout->addWidget(label6, 5, 0, 1, 1);

        label2 = new QLabel(gridLayoutWidget);
        label2->setObjectName(QStringLiteral("label2"));

        gridLayout->addWidget(label2, 1, 0, 1, 1);

        message4 = new QPlainTextEdit(gridLayoutWidget);
        message4->setObjectName(QStringLiteral("message4"));

        gridLayout->addWidget(message4, 3, 2, 1, 1);

        message2 = new QPlainTextEdit(gridLayoutWidget);
        message2->setObjectName(QStringLiteral("message2"));

        gridLayout->addWidget(message2, 1, 2, 1, 1);

        label5 = new QLabel(gridLayoutWidget);
        label5->setObjectName(QStringLiteral("label5"));

        gridLayout->addWidget(label5, 4, 0, 1, 1);

        label1 = new QLabel(gridLayoutWidget);
        label1->setObjectName(QStringLiteral("label1"));

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        label3 = new QLabel(gridLayoutWidget);
        label3->setObjectName(QStringLiteral("label3"));

        gridLayout->addWidget(label3, 2, 0, 1, 1);

        message1 = new QPlainTextEdit(gridLayoutWidget);
        message1->setObjectName(QStringLiteral("message1"));

        gridLayout->addWidget(message1, 0, 2, 1, 1);

        label4 = new QLabel(gridLayoutWidget);
        label4->setObjectName(QStringLiteral("label4"));

        gridLayout->addWidget(label4, 3, 0, 1, 1);

        message5 = new QPlainTextEdit(gridLayoutWidget);
        message5->setObjectName(QStringLiteral("message5"));

        gridLayout->addWidget(message5, 4, 2, 1, 1);

        message6 = new QPlainTextEdit(gridLayoutWidget);
        message6->setObjectName(QStringLiteral("message6"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(message6->sizePolicy().hasHeightForWidth());
        message6->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(message6, 5, 2, 1, 1);

        message3 = new QPlainTextEdit(gridLayoutWidget);
        message3->setObjectName(QStringLiteral("message3"));

        gridLayout->addWidget(message3, 2, 2, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(MessagesForm);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(170, 440, 501, 111));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(label_2);

        to = new QComboBox(horizontalLayoutWidget_2);
        to->setObjectName(QStringLiteral("to"));

        verticalLayout_3->addWidget(to);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        subject = new QLineEdit(horizontalLayoutWidget_2);
        subject->setObjectName(QStringLiteral("subject"));

        horizontalLayout_5->addWidget(subject);


        verticalLayout_2->addLayout(horizontalLayout_5);

        message = new QPlainTextEdit(horizontalLayoutWidget_2);
        message->setObjectName(QStringLiteral("message"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(message);


        horizontalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        error = new QLabel(horizontalLayoutWidget_2);
        error->setObjectName(QStringLiteral("error"));

        verticalLayout_4->addWidget(error);

        send_message = new QPushButton(horizontalLayoutWidget_2);
        send_message->setObjectName(QStringLiteral("send_message"));

        verticalLayout_4->addWidget(send_message);


        horizontalLayout_4->addLayout(verticalLayout_4);

        headerLabel = new QLabel(MessagesForm);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(110, 20, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        Messages = new QWidget(MessagesForm);
        Messages->setObjectName(QStringLiteral("Messages"));
        Messages->setGeometry(QRect(0, 0, 829, 590));
        Messages->raise();
        menuButton->raise();
        horizontalLayoutWidget->raise();
        gridLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        headerLabel->raise();

        retranslateUi(MessagesForm);

        QMetaObject::connectSlotsByName(MessagesForm);
    } // setupUi

    void retranslateUi(QWidget *MessagesForm)
    {
        MessagesForm->setWindowTitle(QApplication::translate("MessagesForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("MessagesForm", "...", nullptr));
        refresh->setText(QApplication::translate("MessagesForm", "Refresh", nullptr));
        pushButton->setText(QApplication::translate("MessagesForm", "+", nullptr));
        label6->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label2->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label5->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label1->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label3->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label4->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("MessagesForm", "Receipient", nullptr));
        label->setText(QApplication::translate("MessagesForm", "Subject", nullptr));
        error->setText(QString());
        send_message->setText(QApplication::translate("MessagesForm", "Send", nullptr));
        headerLabel->setText(QApplication::translate("MessagesForm", "Messages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessagesForm: public Ui_MessagesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESFORM_H
