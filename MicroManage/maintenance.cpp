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

    ui->menu_button->setCheckable(true);
    ui->menu_button->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menu_button->setIconSize(QSize(25, 25));
    ui->refresh->setIcon(QIcon(":images/icons/refresh_icon.png"));
    ui->refresh->setIconSize(QSize(45, 45));
    connect(ui->menu_button, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->refresh, SIGNAL(clicked()), this, SLOT(refreshLogs()));


}


QToolButton* Maintenance::getMenuButton() {
    return ui->menu_button;
}


void Maintenance::refreshLogs() {
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(dbmodel::myDb);

    qry->prepare("SELECT * FROM logs WHERE uid='"+dbmodel::username+"'");
    //qry->prepare("select * from logs");
    qry->exec();
    modal->setQuery(*qry);
    ui->maintenanceTable->setAlternatingRowColors(true);
    ui->maintenanceTable->setModel(modal);
    ui->maintenanceTable->repaint();

}


Maintenance::~Maintenance() {
    delete ui;
}

void Maintenance::on_newRow_clicked()
{
    QString uid, date, address, request, owner, status;
    uid = dbmodel::username;
    date = ui->date_txt->text();
    address = ui->address_txt->text();
    request = ui->request_txt->text();
    owner = ui->owner_txt->text();
    status = ui->status_txt->text();
    QSqlQuery qry1;
    qry1.prepare("insert into logs (uid,date,address,request,owner,status) values ('"+uid+"','"+date+"','"+address+"','"+request+"','"+owner+"','"+status+"')");
    if(qry1.exec()){
        qDebug()<<"saved";
    }
    else{
        qDebug()<<"error didnt save";
    }
    refreshLogs();
}
