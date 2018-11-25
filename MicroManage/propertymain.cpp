#include "propertymain.h"
#include "propdialog.h"
#include "propertybutton.h"


PropertyMain::PropertyMain(QWidget *parent) : QWidget(parent), ui(new Ui::PropertyMainForm) {
    ui->setupUi(this);

    ui->menuButton->setCheckable(true);
    ui->menuButton->setShortcut(QKeySequence("M"));
    ui->menuButton->setIcon(QIcon(":images/icons/menu_icon.png"));
    ui->menuButton->setIconSize(QSize(25, 25));
    ui->addButton->setIcon(QIcon(":images/icons/plus_icon.png"));
    ui->addButton->setIconSize(QSize(35, 35));
    connect(ui->menuButton, SIGNAL(clicked()), parent, SLOT(showSideMenu()));
    connect(ui->addButton, SIGNAL(clicked()), this, SLOT(add()));

    QImage image(":images/icons/propertyImage.jpg");
    scene = new QGraphicsScene();
    item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene->addItem(item);
    ui->graphicsView->setScene(scene);

    propertyLayout = new QVBoxLayout();
    propertyLayout->addSpacerItem(new QSpacerItem(600, 180, QSizePolicy::Expanding, QSizePolicy::Expanding));
    widget = new QWidget();
    widget->setObjectName("propertiesWidget");
    widget->setLayout(propertyLayout);
    ui->scrollArea->setWidget(widget);
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    son = new propDialog(this);
    connect(son,SIGNAL(setUp(QString, QString)),this,SLOT(addProperty(QString, QString)));
}

void PropertyMain::addProperty(QString thisAddress, QString numTenants){
     QString thisTenants = "";
     thisTenants.append(numTenants);
     thisTenants.append(" Tenants");
     QWidget* newProperty = new QWidget();
     newProperty->setObjectName("newProperty");
     QHBoxLayout* mainLayout = new QHBoxLayout();
     QVBoxLayout* leftLayout = new QVBoxLayout();
     QVBoxLayout* rightLayout = new QVBoxLayout();
     QTextBrowser* address = new QTextBrowser();
     address->setFixedSize(230, 80);
     address->setText(thisAddress);
     rightLayout->addWidget(address);
     QTextBrowser* tenant = new QTextBrowser();
     tenant->setFixedSize(120, 30);
     tenant->setText(thisTenants);
     rightLayout->addWidget(tenant);
     propertybutton* button = new propertybutton(newProperty);
     button->setText("Delete");
     button->setObjectName("button");
     rightLayout->addWidget(button);
     QGraphicsView* graphicsView = new QGraphicsView();
     graphicsView->setFixedSize(135, 135);
     QRegion circle(graphicsView->rect(), QRegion::Ellipse);
     graphicsView->setMask(circle);
     graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     QImage image(":images/icons/propertyImage.jpg");
     QGraphicsScene* scene = new QGraphicsScene();
     QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
     scene->addItem(item);
     graphicsView->setScene(scene);
     leftLayout->addWidget(graphicsView);
     mainLayout->addLayout(leftLayout);
     mainLayout->addLayout(rightLayout);
     newProperty->setLayout(mainLayout);
     newProperty->setFixedSize(600, 180);
     connect(button, SIGNAL(remove(QWidget*)), this, SLOT(deleteOne(QWidget*)));

     propertyLayout->insertWidget(propertyLayout->count() - 1,newProperty);
     widget->setLayout(propertyLayout);
     ui->scrollArea->setWidget(widget);
}

void PropertyMain::add(){
    son->show();
}

void PropertyMain::deleteOne(QWidget* property){
    propertyLayout->removeWidget(property);
    widget = new QWidget();
    widget->setObjectName("propertiesWidget");
    widget->setLayout(propertyLayout);
    ui->scrollArea->setWidget(widget);
}

QToolButton* PropertyMain::getMenuButton() {
    return ui->menuButton;
}


PropertyMain::~PropertyMain() {
    delete ui;
}
