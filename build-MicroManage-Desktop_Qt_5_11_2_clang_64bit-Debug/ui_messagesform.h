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
    QLabel *headerLabel;
    QWidget *Messages;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label1;
    QPlainTextEdit *message1;
    QLabel *label2;
    QPlainTextEdit *message2;
    QLabel *label3;
    QPlainTextEdit *message3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *subject;
    QPlainTextEdit *message;
    QVBoxLayout *verticalLayout_4;
    QComboBox *to;
    QPushButton *send_message;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *category;
    QPushButton *refresh;
    QPushButton *pushButton;

    void setupUi(QWidget *MessagesForm)
    {
        if (MessagesForm->objectName().isEmpty())
            MessagesForm->setObjectName(QStringLiteral("MessagesForm"));
        MessagesForm->resize(829, 590);
        menuButton = new QToolButton(MessagesForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        headerLabel = new QLabel(MessagesForm);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(110, 20, 211, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        Messages = new QWidget(MessagesForm);
        Messages->setObjectName(QStringLiteral("Messages"));
        Messages->setGeometry(QRect(0, 0, 829, 590));
        verticalLayoutWidget = new QWidget(Messages);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 130, 601, 307));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label1 = new QLabel(verticalLayoutWidget);
        label1->setObjectName(QStringLiteral("label1"));

        verticalLayout->addWidget(label1);

        message1 = new QPlainTextEdit(verticalLayoutWidget);
        message1->setObjectName(QStringLiteral("message1"));

        verticalLayout->addWidget(message1);

        label2 = new QLabel(verticalLayoutWidget);
        label2->setObjectName(QStringLiteral("label2"));

        verticalLayout->addWidget(label2);

        message2 = new QPlainTextEdit(verticalLayoutWidget);
        message2->setObjectName(QStringLiteral("message2"));

        verticalLayout->addWidget(message2);

        label3 = new QLabel(verticalLayoutWidget);
        label3->setObjectName(QStringLiteral("label3"));

        verticalLayout->addWidget(label3);

        message3 = new QPlainTextEdit(verticalLayoutWidget);
        message3->setObjectName(QStringLiteral("message3"));

        verticalLayout->addWidget(message3);

        horizontalLayoutWidget_3 = new QWidget(Messages);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(110, 440, 601, 106));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        subject = new QLineEdit(horizontalLayoutWidget_3);
        subject->setObjectName(QStringLiteral("subject"));

        verticalLayout_5->addWidget(subject);

        message = new QPlainTextEdit(horizontalLayoutWidget_3);
        message->setObjectName(QStringLiteral("message"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(message->sizePolicy().hasHeightForWidth());
        message->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(message);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        to = new QComboBox(horizontalLayoutWidget_3);
        to->setObjectName(QStringLiteral("to"));

        verticalLayout_4->addWidget(to);

        send_message = new QPushButton(horizontalLayoutWidget_3);
        send_message->setObjectName(QStringLiteral("send_message"));

        verticalLayout_4->addWidget(send_message);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayoutWidget = new QWidget(Messages);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(110, 80, 302, 41));
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
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton);

        Messages->raise();
        menuButton->raise();
        headerLabel->raise();

        retranslateUi(MessagesForm);

        QMetaObject::connectSlotsByName(MessagesForm);
    } // setupUi

    void retranslateUi(QWidget *MessagesForm)
    {
        MessagesForm->setWindowTitle(QApplication::translate("MessagesForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("MessagesForm", "...", nullptr));
        headerLabel->setText(QApplication::translate("MessagesForm", "Messages", nullptr));
        label1->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label2->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        label3->setText(QApplication::translate("MessagesForm", "TextLabel", nullptr));
        send_message->setText(QApplication::translate("MessagesForm", "Send", nullptr));
        refresh->setText(QApplication::translate("MessagesForm", "Refresh", nullptr));
        pushButton->setText(QApplication::translate("MessagesForm", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MessagesForm: public Ui_MessagesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESFORM_H
