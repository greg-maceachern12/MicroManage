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
