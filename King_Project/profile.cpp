#include "profile.h"
#include "ui_profile.h"

Profile::Profile(QWidget *parent) :QWidget(parent),ui(new Ui::Profile)
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


    editButton->setGeometry(QRect(QPoint(650, 500), QSize(50, 50)));

    connect(editButton, SIGNAL (released()), this, SLOT (makeEditable()));


    //set button checkable to true so that it can be clicked to edit and clicked to save


    //ui->toolButton->setText("Menu");

    // Create the button, make "this" the parent
    //sideButton = new QPushButton("My Button", this);
    // set size and location of the button
    //sideButton->setGeometry(QRect(QPoint(100, 100),QSize(200, 50)));

    // Connect button signal to appropriate slot
    //connect(sideButton, SIGNAL (released()), this, SLOT (handleButton()));


    //sideMenu = new QDockWidget("Menu", this);




}

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


//void MyTextEdit::paintEvent(QPaintEvent* event)
//{
//	QTextEdit::paintEvent(event);
//	QPainter p(viewport());
//	p.fillRect(cursorRect(), QBrush(Qt::white));
//}



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
