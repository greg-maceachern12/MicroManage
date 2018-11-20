/********************************************************************************
** Form generated from reading UI file 'mainpageform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGEFORM_H
#define UI_MAINPAGEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPageForm
{
public:
    QToolButton *menuButton;
    QLabel *welcomeLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *MainPage;

    void setupUi(QWidget *MainPageForm)
    {
        if (MainPageForm->objectName().isEmpty())
            MainPageForm->setObjectName(QStringLiteral("MainPageForm"));
        MainPageForm->resize(829, 590);
        menuButton = new QToolButton(MainPageForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        welcomeLabel = new QLabel(MainPageForm);
        welcomeLabel->setObjectName(QStringLiteral("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(80, 40, 671, 61));
        QFont font;
        font.setPointSize(24);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(MainPageForm);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(170, 150, 491, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        MainPage = new QWidget(MainPageForm);
        MainPage->setObjectName(QStringLiteral("MainPage"));
        MainPage->setGeometry(QRect(0, 0, 829, 590));
        MainPage->raise();
        menuButton->raise();
        welcomeLabel->raise();
        gridLayoutWidget->raise();

        retranslateUi(MainPageForm);

        QMetaObject::connectSlotsByName(MainPageForm);
    } // setupUi

    void retranslateUi(QWidget *MainPageForm)
    {
        MainPageForm->setWindowTitle(QApplication::translate("MainPageForm", "HEY", nullptr));
        menuButton->setText(QApplication::translate("MainPageForm", "...", nullptr));
        welcomeLabel->setText(QApplication::translate("MainPageForm", "Welcome back, ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPageForm: public Ui_MainPageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGEFORM_H
