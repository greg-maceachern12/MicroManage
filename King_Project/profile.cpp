#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent) :QWidget(parent),ui(new Ui::Profile)
{
    ui->setupUi(this);
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    //ui->toolButton->setText("Menu");

    // Create the button, make "this" the parent
    //sideButton = new QPushButton("My Button", this);
    // set size and location of the button
    //sideButton->setGeometry(QRect(QPoint(100, 100),QSize(200, 50)));

    // Connect button signal to appropriate slot
    //connect(sideButton, SIGNAL (released()), this, SLOT (handleButton()));


    //sideMenu = new QDockWidget("Menu", this);

//    QSqlDatabase myDb = QSqlDatabase::addDatabase("QSQLITE");
//    myDb.setDatabaseName("/Users/gregmaceachern/Documents/3rd/kingrepo/King_Project/micro.db");

//    if (!myDb.open()) {
//        ui->txtName->setText("");
//    } else {
//        ui->txtName->setText("No Connection");
//    }

    QSqlQuery query;
    query.exec("SELECT name, age, type, address, email, phone FROM user");
    while (query.next()) {
         ui->txtName->setText(query.value(0).toString());
         ui->txtAge->setText(query.value(1).toString());
         ui->txtType->setText(query.value(2).toString());
         ui->txtAddress->setText(query.value(3).toString());
         ui->txtEmail->setText(query.value(4).toString());
         ui->txtPhone->setText(query.value(5).toString());

    }

}

//void Profile::handleButton()
// {
//    // change the text
//    sideButton->setText("Example");
//    // resize button
//    sideButton->resize(100,100);
// }


Profile::~Profile()
{
    delete ui;
}
