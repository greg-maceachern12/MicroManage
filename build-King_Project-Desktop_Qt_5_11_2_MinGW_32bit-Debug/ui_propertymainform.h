/********************************************************************************
** Form generated from reading UI file 'propertymainform.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYMAINFORM_H
#define UI_PROPERTYMAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyMainForm
{
public:
    QToolButton *menuButton;
    QWidget *Properties;
    QTextEdit *titleText;
    QTextBrowser *address;
    QTextBrowser *tenant;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *PropertyMainForm)
    {
        if (PropertyMainForm->objectName().isEmpty())
            PropertyMainForm->setObjectName(QStringLiteral("PropertyMainForm"));
        PropertyMainForm->setEnabled(true);
        PropertyMainForm->resize(829, 590);
        PropertyMainForm->setMouseTracking(false);
        PropertyMainForm->setAutoFillBackground(false);
        PropertyMainForm->setStyleSheet(QStringLiteral(""));
        menuButton = new QToolButton(PropertyMainForm);
        menuButton->setObjectName(QStringLiteral("menuButton"));
        menuButton->setGeometry(QRect(20, 20, 45, 45));
        Properties = new QWidget(PropertyMainForm);
        Properties->setObjectName(QStringLiteral("Properties"));
        Properties->setGeometry(QRect(0, 0, 829, 590));
        titleText = new QTextEdit(Properties);
        titleText->setObjectName(QStringLiteral("titleText"));
        titleText->setEnabled(true);
        titleText->setGeometry(QRect(110, 30, 361, 51));
        QFont font;
        font.setPointSize(36);
        font.setKerning(true);
        titleText->setFont(font);
        titleText->setMouseTracking(false);
        titleText->setFocusPolicy(Qt::StrongFocus);
        titleText->setContextMenuPolicy(Qt::DefaultContextMenu);
        titleText->setStyleSheet(QStringLiteral(""));
        titleText->setFrameShape(QFrame::NoFrame);
        titleText->setFrameShadow(QFrame::Plain);
        titleText->setLineWidth(1);
        titleText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        titleText->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        address = new QTextBrowser(Properties);
        address->setObjectName(QStringLiteral("address"));
        address->setEnabled(true);
        address->setGeometry(QRect(410, 100, 231, 81));
        address->setFrameShape(QFrame::NoFrame);
        address->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        address->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tenant = new QTextBrowser(Properties);
        tenant->setObjectName(QStringLiteral("tenant"));
        tenant->setEnabled(true);
        tenant->setGeometry(QRect(410, 200, 121, 31));
        tenant->setFrameShape(QFrame::NoFrame);
        tenant->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tenant->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView = new QGraphicsView(Properties);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(150, 100, 191, 161));
        Properties->raise();
        menuButton->raise();

        retranslateUi(PropertyMainForm);

        QMetaObject::connectSlotsByName(PropertyMainForm);
    } // setupUi

    void retranslateUi(QWidget *PropertyMainForm)
    {
        PropertyMainForm->setWindowTitle(QApplication::translate("PropertyMainForm", "Form", nullptr));
        menuButton->setText(QApplication::translate("PropertyMainForm", "...", nullptr));
        titleText->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:36pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt; font-weight:600; color:#ffaa00;\">My Properties</span></p></body></html>", nullptr));
        address->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffaa00;\">444 King St.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffaa00;\">Kingston,ON Canada</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffaa00;\">K7L 5W2</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#ffaa00;\"><br /></p></body></html>", nullptr));
        tenant->setHtml(QApplication::translate("PropertyMainForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; color:#ffaa00;\">7 Tenants</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; color:#ffaa00;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyMainForm: public Ui_PropertyMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYMAINFORM_H
