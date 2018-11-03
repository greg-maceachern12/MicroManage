#include "profile.h"

Profile::Profile(QWidget *parent) :QWidget(parent), ui(new Ui::ProfileForm) {
    ui->setupUi(this);
    ui->toolButton->setCheckable(true);
    ui->toolButton->setText("Menu");
    connect(ui->toolButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));


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
