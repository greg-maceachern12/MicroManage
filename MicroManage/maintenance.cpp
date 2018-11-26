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
    ui->menuButton->setShortcut(QKeySequence("M"));
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    ui->refreshButton->setIcon(QIcon(":images/icons/refresh_icon.png"));
    ui->refreshButton->setIconSize(QSize(35, 35));
    ui->maintenanceTable->horizontalHeader()->setFixedWidth(ui->maintenanceTable->width());
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->refreshButton, SIGNAL(clicked()), this, SLOT(refreshLogs()));

    int width(ui->maintenanceTable->width()/6);
    ui->maintenanceTable->horizontalHeader()->setDefaultSectionSize(width - 3);
    ui->maintenanceTable->horizontalHeader()->setMinimumSectionSize(width - 3);


}


QToolButton* Maintenance::getMenuButton() {
    return ui->menuButton;
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
    QString uid, address, request, owner, status;
    uid = dbmodel::username;
    QDateTime date = QDateTime::currentDateTime();
    address = ui->addressTxt->text();
    request = ui->requestTxt->text();
    owner = ui->ownerTxt->text();
    status = ui->statusTxt->text();
    QSqlQuery qry1;
    qry1.prepare("INSERT INTO logs (uid, date, address, request, owner,status) "
                    "VALUES (:uid, :date, :address, :request, :owner, :status)");
    qry1.bindValue(":uid", uid);
    qry1.bindValue(":date", QDateTime::currentDateTime());
    qry1.bindValue(":address", address);
    qry1.bindValue(":request", request);
    qry1.bindValue(":owner", owner);
    qry1.bindValue(":status", status);
    //query.exec();
    //qry1.prepare("insert into logs (uid,date,address,request,owner,status) values ('"+uid+"','"+date+"','"+address+"','"+request+"','"+owner+"','"+status+"')");
    if(qry1.exec()){
        qDebug()<<"saved";
    }
    else{
        qDebug()<<"error didnt save";
    }
    refreshLogs();
}
