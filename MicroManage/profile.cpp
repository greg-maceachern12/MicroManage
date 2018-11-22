#include "profile.h"
#include "dbmodel.h"
#include <QFileDialog>

Profile::Profile(QWidget *parent) :QWidget(parent), ui(new Ui::ProfileForm)
{
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

    ui->editButton->setIcon(QIcon(":images/icons/edit_icon.png"));
    ui->editButton->setIconSize(QSize(45, 45));
    connect(ui->editButton, SIGNAL(clicked()), this, SLOT(makeEditable()));

    //set page size to 689 height to 547 width

    //setting text boxes tp read only
    ui->name->setReadOnly(true);
    ui->contact->setReadOnly(true);
    ui->description->setReadOnly(true);
    ui->properties->setReadOnly(true);
    ui->age->setReadOnly(true);
    ui->landlord->setReadOnly(true);

        QSqlQuery query;
        qDebug() << dbmodel::username;
        query.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+dbmodel::username+"'");
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

QToolButton* Profile::getMenuButton() {
    return ui->menuButton;
}

Ui::ProfileForm* Profile::getUi() {
    return ui;
}

void Profile::updateProfile() {
    qDebug() << "test" + dbmodel::username;
    QSqlQuery query;
    query.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+dbmodel::username+"'");
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
    if (ui->editButton->isChecked() ){
        ui->name->setReadOnly(false);
        ui->description->setReadOnly(false);
        ui->contact->setReadOnly(false);
        ui->properties->setReadOnly(false);
        ui->age->setReadOnly(false);


        // change the text
        //editButton->setText("Save");

    }
   else{
        ui->name->setReadOnly(true);
        ui->description->setReadOnly(true);
        ui->contact->setReadOnly(true);
        ui->properties->setReadOnly(true);
        ui->age->setReadOnly(true);

        //editButton->setText("Edit");
    }

 }


void Profile::refresh()
 {
    qDebug() << dbmodel::username;
 }


Profile::~Profile()
{
    delete ui;
}

void Profile::on_importButton_clicked()
{
    QString imagename = QFileDialog::getOpenFileName(this, tr("Open Image"), "/Users/trevormclellan/Desktop/Documents", tr("Image Files (*.png *.jpg *.bmp *.jpeg)"));
    //"All files(*.*)"
    if( !imagename.isNull() )
    {
       qDebug() << "selected file path : " << imagename.toUtf8();
    }

    //QWidget *frame = new QWidget(this);
    //frame->setGeometry(x, y, width, height);
    ui->image->setStyleSheet("background-image: url(imagename)");
}
