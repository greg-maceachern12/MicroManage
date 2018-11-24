#include "profile.h"
#include "dbmodel.h"
#include <QFileDialog>
#include <QtGui>

Profile::Profile(QWidget *parent) :QWidget(parent), ui(new Ui::ProfileForm)
{
    ui->setupUi(this);

    ui->menu_button->setCheckable(true);
    ui->menu_button->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menu_button->setIconSize(QSize(25, 25));
    connect(ui->menu_button, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

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
             ui->address->setText(query.value(3).toString());
             ui->properties->setText(query.value(3).toString());
             ui->txtEmail->setText(query.value(4).toString());
             ui->contact->setText(query.value(5).toString());

        }

}

QToolButton* Profile::getMenuButton() {
    return ui->menu_button;
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
         ui->address->setText(query.value(3).toString());
         ui->properties->setText(query.value(3).toString());
         ui->txtEmail->setText(query.value(4).toString());
         ui->contact->setText(query.value(5).toString());
    }
}

void Profile::makeEditable()
 {
    if (ui->editButton->isChecked() ){
        ui->name->setReadOnly(false);
        ui->description->setReadOnly(false);
        ui->contact->setReadOnly(false);
        ui->properties->setReadOnly(false);
        ui->age->setReadOnly(false);
    }
   else{
        ui->name->setReadOnly(true);
        ui->description->setReadOnly(true);
        ui->contact->setReadOnly(true);
        ui->properties->setReadOnly(true);
        ui->age->setReadOnly(true);
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
    QString imagename = QFileDialog::getOpenFileName(this, "Open Image", "Image Files (*.png *.jpg *.bmp *.jpeg)");

    if (imagename != "") {
        QPixmap p;
        p.load(imagename, nullptr, Qt::AutoColor);
        ui->image->setScaledContents(true);
        ui->image->setPixmap(p);
    }

}
