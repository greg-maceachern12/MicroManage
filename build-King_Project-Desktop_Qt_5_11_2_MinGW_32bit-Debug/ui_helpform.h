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
    QLabel *helpLabel;

    void setupUi(QWidget *HelpForm)
    {
        if (HelpForm->objectName().isEmpty())
            HelpForm->setObjectName(QStringLiteral("HelpForm"));
        HelpForm->resize(717, 527);
        helpDocEdit = new QTextEdit(HelpForm);
        helpDocEdit->setObjectName(QStringLiteral("helpDocEdit"));
        helpDocEdit->setGeometry(QRect(90, 110, 541, 391));
        helpDocEdit->setReadOnly(true);
        menuButton = new QToolButton(HelpForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 41, 41));
        quoteLabel = new QLabel(HelpForm);
        quoteLabel->setObjectName(QStringLiteral("quoteLabel"));
        quoteLabel->setGeometry(QRect(120, 70, 211, 20));
        helpLabel = new QLabel(HelpForm);
        helpLabel->setObjectName(QStringLiteral("helpLabel"));
        helpLabel->setGeometry(QRect(120, 20, 321, 51));
        helpLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(HelpForm);

        QMetaObject::connectSlotsByName(HelpForm);
    } // setupUi

    void retranslateUi(QWidget *HelpForm)
    {
        HelpForm->setWindowTitle(QApplication::translate("HelpForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("HelpForm", "...", nullptr));
        quoteLabel->setText(QApplication::translate("HelpForm", "Get the most out of MicroManage", nullptr));
        helpLabel->setText(QApplication::translate("HelpForm", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpForm: public Ui_HelpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFORM_H
