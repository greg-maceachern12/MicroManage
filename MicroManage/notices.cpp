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

    ui->menu_button->setCheckable(true);
    ui->menu_button->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menu_button->setIconSize(QSize(25, 25));
    connect(ui->menu_button, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->create_button, SIGNAL(clicked()), this, SLOT(createNotice()));
    connect(ui->refresh_button, SIGNAL(clicked()), this, SLOT(getNotices()));



}


QToolButton* Notices::getMenuButton() {
    return ui->menu_button;
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
    QString notice = ui->notice_text->text();
    QString date = ui->date_text->text();

    QSqlQuery qry;
    QSqlQuery qryWrite;

    qryWrite.prepare("insert into notices (uid, notice, date)"
                     "VALUES (:username, :notice, :date)");
    qryWrite.bindValue(":username", dbmodel::username);
    qryWrite.bindValue(":notice", notice);
    qryWrite.bindValue(":date", date);

    if (qryWrite.exec()) {
        ui->notice_text->setText("");
        ui->date_text->setText("");
        getNotices();
    } else {
        qDebug() << qryWrite.lastError();
    }


}
