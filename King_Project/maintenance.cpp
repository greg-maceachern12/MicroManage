#include "maintenance.h"
#include "dbmodel.h"
#include <QtWidgets>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QFileInfo>


Maintenance::Maintenance(QWidget *parent) : QWidget(parent), ui(new Ui::MaintenanceForm) {
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
       connect(ui->refresh, SIGNAL(clicked()), this, SLOT(refreshLogs()));

}


QToolButton* Maintenance::getMenuButton() {
    return ui->menuButton;
}


void Maintenance::refreshLogs() {
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(dbmodel::myDb);

    qry->prepare("SELECT * FROM logs WHERE uid='"+dbmodel::username+"'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

}


Maintenance::~Maintenance() {
    delete ui;
}
