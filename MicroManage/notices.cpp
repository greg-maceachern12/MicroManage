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
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->btnCreate, SIGNAL(clicked()), this, SLOT(createNotice()));
    connect(ui->btnRefresh, SIGNAL(clicked()), this, SLOT(getNotices()));

   // ui->addButton->setIcon(QIcon(":images/icons/plus_icon.png"));
    //ui->addButton->setIconSize(QSize(45, 45));

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
    QString notice = ui->txtNotice->text();
    QString date = ui->txtDate->text();

    QSqlQuery qry;
    QSqlQuery qryWrite;

    qryWrite.prepare("insert into notices (uid, notice, date)"
                     "VALUES (:username, :notice, :date)");
    qryWrite.bindValue(":username", dbmodel::username);
    qryWrite.bindValue(":notice", notice);
    qryWrite.bindValue(":date", date);

    if (qryWrite.exec()) {
        ui->txtNotice->setText("");
        ui->txtDate->setText("");
        getNotices();
    } else {
        qDebug() << qryWrite.lastError();
    }


}
