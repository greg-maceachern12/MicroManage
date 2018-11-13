#include "logs.h"

Logs::Logs(QWidget *parent) : QWidget(parent), ui(new Ui::LogsForm) {
    ui->setupUi(this);
    connect(ui->refresh, SIGNAL(clicked()), this, SLOT(refreshLogs()));

}
Logs::~Logs() {
    delete ui;
}
void Logs::refreshLogs() {
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(myDb);

    qry->prepare("SELECT * FROM logs WHERE uid=\"gmac12greg\"");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

}
