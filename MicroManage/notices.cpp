#include "notices.h"
#include "dbmodel.h"
#include <QtWidgets>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>


Notices::Notices(QWidget *parent) : QWidget(parent), ui(new Ui::NoticesForm) {
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setShortcut(QKeySequence("M"));
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->createNoticeButton, SIGNAL(clicked()), this, SLOT(createNotice()));
    ui->noticeTxt->setPlaceholderText("Notice");

    ui->noticesTable->setAlternatingRowColors(true);
    int width(ui->noticesTable->width()/2);
    ui->noticesTable->horizontalHeader()->setDefaultSectionSize(width - 3);
    ui->noticesTable->horizontalHeader()->setMinimumSectionSize(width - 3);

}


QToolButton* Notices::getMenuButton() {
    return ui->menuButton;
}


Notices::~Notices() {
    delete ui;
}

void Notices::refreshNotices() {
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(dbmodel::myDb);

    qry->prepare("SELECT notice, date FROM notices WHERE uid='"+dbmodel::username+"'");
    qry->exec();
    qDebug() << qry->value(0);
    modal->setQuery(*qry);
    ui->noticesTable->setModel(modal);
    ui->noticesTable->repaint();
}

void Notices::createNotice() {
   
    QString notice = ui->noticeTxt->text();

    QSqlQuery qry;
    QSqlQuery qryWrite;

    qryWrite.prepare("insert into notices (uid, notice, date)"
                     "VALUES (:username, :notice, :date)");
    qryWrite.bindValue(":username", dbmodel::username);
    qryWrite.bindValue(":notice", notice);
    qryWrite.bindValue(":date", QDateTime::currentDateTime());

    if (qryWrite.exec()) {
        ui->noticeTxt->setText("");
        
        refreshNotices();
    } else {
        qDebug() << qryWrite.lastError();
    }


}
