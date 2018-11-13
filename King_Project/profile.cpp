#include "profile.h"
#include "dbmodel.h"

Profile::Profile(QWidget *parent) :QWidget(parent), ui(new Ui::ProfileForm)
{
    ui->setupUi(this);


    //set page size to 689 height to 547 width


    editButton = new QToolButton(this);
    editButton->setText("Edit");
    editButton->setCheckable(true);

    //setting text boxes tp read only
    ui->name->setReadOnly(true);
    ui->contact->setReadOnly(true);
    ui->description->setReadOnly(true);
    ui->properties->setReadOnly(true);
    ui->age->setReadOnly(true);
    ui->landlord->setReadOnly(true);

        QSqlQuery query;
        qDebug() << username;
        query.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+username+"'");
        while (query.next()) {
             ui->name->setText(query.value(0).toString());
             ui->age->setText(query.value(1).toString());
             ui->landlord->setText(query.value(2).toString());
             ui->properties->setText(query.value(3).toString());
             ui->txtEmail->setText(query.value(4).toString());
             ui->contact->setText(query.value(5).toString());

        }


    /*QSqlQuery query;
    qDebug() << username;
    query.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+username+"'");
    while (query.next()) {
         ui->name->setText(query.value(0).toString());
         ui->age->setText(query.value(1).toString());
         ui->landlord->setText(query.value(2).toString());
         ui->properties->setText(query.value(3).toString());
         ui->txtEmail->setText(query.value(4).toString());
         ui->contact->setText(query.value(5).toString());

    }*/

}

Ui::ProfileForm* Profile::getUi() {
    return ui;
}

void Profile::updateProfile(QSqlQuery query) {
    qDebug() << "test" + username;
    //query.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+username+"'");
    while (query.next()) {
         ui->name->setText(query.value(0).toString());
         ui->age->setText(query.value(1).toString());
         ui->landlord->setText(query.value(2).toString());
         ui->properties->setText(query.value(3).toString());
         ui->txtEmail->setText(query.value(4).toString());
         ui->contact->setText(query.value(5).toString());
    }
}

//void Profile::update(QString* name) {
//    QSqlQuery query;
//    qDebug() << name;
//    query.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+*name+"'");
//    while (query.next()) {
//         ui->name->setText(query.value(0).toString());
//         ui->age->setText(query.value(1).toString());
//         ui->landlord->setText(query.value(2).toString());
//         ui->properties->setText(query.value(3).toString());
//         ui->txtEmail->setText(query.value(4).toString());
//         ui->contact->setText(query.value(5).toString());

//    }
//}

void Profile::makeEditable()
 {
    if (editButton->isChecked() ){
        ui->name->setReadOnly(false);
        ui->description->setReadOnly(false);
        ui->contact->setReadOnly(false);
        ui->properties->setReadOnly(false);
        ui->age->setReadOnly(false);


        // change the text
        editButton->setText("Save");

    }
   else{
        ui->name->setReadOnly(true);
        ui->description->setReadOnly(true);
        ui->contact->setReadOnly(true);
        ui->properties->setReadOnly(true);
        ui->age->setReadOnly(true);

        editButton->setText("Edit");
    }

 }

void Profile::refresh()
 {
    qDebug() << username;
 }



Profile::~Profile()
{
    delete ui;
}
