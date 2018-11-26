#include "profile.h"
#include "dbmodel.h"
#include <QFileDialog>
#include <QtGui>

Profile::Profile(QStatusBar *status_bar, QWidget *parent) :QWidget(parent), ui(new Ui::ProfileForm)
{
    ui->setupUi(this);

    statusBar = status_bar;
    ui->menuButton->setCheckable(true);
    ui->menuButton->setShortcut(QKeySequence("M"));
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));

    ui->editButton->setIcon(QIcon(":images/icons/edit_icon.png"));
    ui->editButton->setIconSize(QSize(35, 35));
    connect(ui->editButton, SIGNAL(clicked()), this, SLOT(makeEditable()));

    //set page size to 689 height to 547 width

    //setting text boxes tp read only
    ui->myEmail->setReadOnly(true);
    ui->aboutMe->setReadOnly(true);
    ui->myProperties->setReadOnly(true);
    ui->myAge->setReadOnly(true);
    ui->myAddress->setReadOnly(true);
    ui->changePhotoButton->hide();
    QRegion circle(ui->photoLabel->rect(), QRegion::Ellipse);
    ui->photoLabel->setMask(circle);
    ui->photoLabel->setScaledContents(true);
    ui->photoLabel->setPixmap(QPixmap(":images/photo_temp.png"));
    ui->aboutMe->setAlignment(Qt::AlignCenter);
    ui->aboutMe->setPlaceholderText("Describe yourself!");
    ui->myAddress->setPlaceholderText("Address\nCity\nPostal Code");
    ui->myAddress->setAlignment(Qt::AlignRight);

        QSqlQuery query;
        qDebug() << dbmodel::username;
        query.exec("SELECT name, age, type, address, email, phone FROM user WHERE username='"+dbmodel::username+"'");
        while (query.next()) {
             ui->myName->setText(query.value(0).toString());
             ui->myAge->setText(query.value(1).toString());
             ui->myRole->setText(query.value(2).toString());
             ui->myAddress->setText(query.value(3).toString());
             ui->myProperties->setText(query.value(3).toString());
             ui->myEmail->setText(query.value(4).toString());
             ui->myPhone->setText(query.value(5).toString());

        }

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
    query.exec("SELECT name, age, type, address, email, phone, description FROM user WHERE username='"+dbmodel::username+"'");
    while (query.next()) {
         ui->myName->setText(query.value(0).toString());
         ui->myAge->setText(query.value(1).toString());
         ui->myRole->setText(query.value(2).toString());
         ui->myAddress->setText(query.value(3).toString());
         ui->myProperties->setText(query.value(3).toString());
         ui->myEmail->setText(query.value(4).toString());
         ui->myPhone->setText(query.value(5).toString());
         ui->aboutMe->setText(query.value(6).toString());
         ui->myAddress->setAlignment(Qt::AlignRight);
         ui->aboutMe->setAlignment(Qt::AlignCenter);
    }
}

void Profile::makeEditable()
 {
    if (ui->editButton->isChecked() ){
        ui->aboutMe->setReadOnly(false);
        ui->myPhone->setReadOnly(false);
        ui->myEmail->setReadOnly(false);
        ui->myAddress->setReadOnly(false);
        ui->myProperties->setReadOnly(false);
        ui->myAge->setReadOnly(false);
        ui->changePhotoButton->show();
    }
   else{
        ui->aboutMe->setReadOnly(true);
        ui->myPhone->setReadOnly(true);
        ui->myEmail->setReadOnly(true);
        ui->myAddress->setReadOnly(true);
        ui->myProperties->setReadOnly(true);
        ui->myAge->setReadOnly(true);
        ui->aboutMe->clearFocus();
        ui->myPhone->clearFocus();
        ui->myEmail->clearFocus();
        ui->myAddress->clearFocus();
        ui->myProperties->clearFocus();
        ui->myAge->clearFocus();
        ui->changePhotoButton->hide();

        //saving edited info in database
        QString name1, age, address, email, phone, description;
        name1 = ui->myName->text();
        age = ui->myAge->text();
        address = ui->myProperties->text();
        email = ui->myEmail->text();
        phone = ui->myPhone->text();
        description = ui->aboutMe->toPlainText();

        QSqlQuery qry1;
        qry1.prepare("update user set name='"+name1+"',age='"+age+"',address='"+address+"',email='"+email+"',phone='"+phone+"',description='"+description+"' where username='"+dbmodel::username+"'");
        if(qry1.exec()){
            statusBar->showMessage("Changes saved.", 10000);
        }
        else{
            statusBar->showMessage("ERROR: Changes not saved.", 10000);
        }


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

void Profile::on_changePhotoButton_clicked()
{
    QString imagename = QFileDialog::getOpenFileName(this, "Open Image", "Image Files (*.png *.jpg *.bmp *.jpeg)");

    if (imagename != "") {
        QPixmap p;
        p.load(imagename, nullptr, Qt::AutoColor);
        ui->photoLabel->setScaledContents(true);
        ui->photoLabel->setPixmap(p);
    }

}
