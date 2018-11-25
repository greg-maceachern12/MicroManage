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
    connect(ui->createButton, SIGNAL(clicked()), this, SLOT(createNotice()));
    connect(ui->refreshButton, SIGNAL(clicked()), this, SLOT(getNotices()));

    ui->noticeTxt->setPlaceholderText("Notice");

}


QToolButton* Notices::getMenuButton() {
    return ui->menuButton;
}


Notices::~Notices() {
    delete ui;
}

void Notices::getNotices() {
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(dbmodel::myDb);

    qry->prepare("SELECT date notices FROM notices WHERE uid='"+dbmodel::username+"'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
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
        
        getNotices();
    } else {
        qDebug() << qryWrite.lastError();
    }


}
