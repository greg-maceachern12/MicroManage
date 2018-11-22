/********************************************************************************
** Form generated from reading UI file 'helpform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPFORM_H
#define UI_HELPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpForm
{
public:
    QTextEdit *helpDocEdit;
    QToolButton *menuButton;
    QLabel *quoteLabel;
    QLabel *headerLabel;
    QLabel *quoteLabel_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QWidget *Help;

    void setupUi(QWidget *HelpForm)
    {
        if (HelpForm->objectName().isEmpty())
            HelpForm->setObjectName(QStringLiteral("HelpForm"));
        HelpForm->resize(829, 590);
        helpDocEdit = new QTextEdit(HelpForm);
        helpDocEdit->setObjectName(QStringLiteral("helpDocEdit"));
        helpDocEdit->setGeometry(QRect(90, 100, 651, 391));
        helpDocEdit->setReadOnly(true);
        menuButton = new QToolButton(HelpForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        quoteLabel = new QLabel(HelpForm);
        quoteLabel->setObjectName(QStringLiteral("quoteLabel"));
        quoteLabel->setGeometry(QRect(120, 110, 211, 20));
        headerLabel = new QLabel(HelpForm);
        headerLabel->setObjectName(QStringLiteral("headerLabel"));
        headerLabel->setGeometry(QRect(110, 20, 101, 51));
        QFont font;
        font.setPointSize(24);
        headerLabel->setFont(font);
        headerLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        quoteLabel_2 = new QLabel(HelpForm);
        quoteLabel_2->setObjectName(QStringLiteral("quoteLabel_2"));
        quoteLabel_2->setGeometry(QRect(120, 350, 451, 20));
        label = new QLabel(HelpForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 160, 511, 21));
        label_2 = new QLabel(HelpForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 180, 521, 21));
        label_3 = new QLabel(HelpForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 200, 511, 21));
        label_4 = new QLabel(HelpForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 230, 541, 21));
        label_5 = new QLabel(HelpForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 250, 541, 21));
        label_6 = new QLabel(HelpForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 270, 541, 21));
        label_7 = new QLabel(HelpForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 290, 541, 21));
        label_8 = new QLabel(HelpForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 310, 541, 21));
        label_9 = new QLabel(HelpForm);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 140, 541, 21));
        label_11 = new QLabel(HelpForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 370, 511, 21));
        label_10 = new QLabel(HelpForm);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 390, 511, 21));
        label_12 = new QLabel(HelpForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(120, 410, 511, 21));
        label_13 = new QLabel(HelpForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(120, 430, 511, 21));
        label_14 = new QLabel(HelpForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(120, 450, 511, 21));
        Help = new QWidget(HelpForm);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(0, 0, 829, 590));
        Help->raise();
        helpDocEdit->raise();
        menuButton->raise();
        quoteLabel->raise();
        headerLabel->raise();
        quoteLabel_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_11->raise();
        label_10->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();

        retranslateUi(HelpForm);

        QMetaObject::connectSlotsByName(HelpForm);
    } // setupUi

    void retranslateUi(QWidget *HelpForm)
    {
        HelpForm->setWindowTitle(QApplication::translate("HelpForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("HelpForm", "...", nullptr));
        quoteLabel->setText(QApplication::translate("HelpForm", "FAQ:", nullptr));
        headerLabel->setText(QApplication::translate("HelpForm", "Help", nullptr));
        quoteLabel_2->setText(QApplication::translate("HelpForm", "Q:I could no remember my password, how can I login?", nullptr));
        label->setText(QApplication::translate("HelpForm", "A:You could click the \"Menu\" button, then the \"Setting\" button,", nullptr));
        label_2->setText(QApplication::translate("HelpForm", "You can find a \"Forget password\" button, where you can reset your", nullptr));
        label_3->setText(QApplication::translate("HelpForm", "password there.", nullptr));
        label_4->setText(QApplication::translate("HelpForm", "Q:I changed some information of my profile, but the profile doesn't", nullptr));
        label_5->setText(QApplication::translate("HelpForm", "change, what should I do?", nullptr));
        label_6->setText(QApplication::translate("HelpForm", "A:You could logout your account and re-login, then the change may", nullptr));
        label_7->setText(QApplication::translate("HelpForm", "be able to appear. If not, then go back to the profile page and try", nullptr));
        label_8->setText(QApplication::translate("HelpForm", "to change it again.", nullptr));
        label_9->setText(QApplication::translate("HelpForm", "Q:I want to change my password, how do I do that?", nullptr));
        label_11->setText(QApplication::translate("HelpForm", "A:You could click the \"Cannot login?\" button on the login page,", nullptr));
        label_10->setText(QApplication::translate("HelpForm", "then provide your email, and wait for the verification code that", nullptr));
        label_12->setText(QApplication::translate("HelpForm", "is sent to you. If the system says that the email has not been ", nullptr));
        label_13->setText(QApplication::translate("HelpForm", "used, then the account might be deleted ,or you gave the wrong ", nullptr));
        label_14->setText(QApplication::translate("HelpForm", "email.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpForm: public Ui_HelpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFORM_H
