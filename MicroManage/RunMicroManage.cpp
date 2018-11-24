#include "micromanage.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QPixmap>
#include <QThread>



int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //QPixmap pixmap(":/images/splash.jpg");
    QSplashScreen *splash = new QSplashScreen;
    //QPixmap pixmap("AbourUsBG.png");
    splash->setPixmap(QPixmap(":images/splash.png"));
    splash->show();
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    //a.thread()->sleep(15);
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Regular.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-MediumCn.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-MediumCnIt.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Demi.otf");
    QFontDatabase::addApplicationFont(":css/fonts/AvenirNextLTPro-Bold.otf");
    QFile styleFile(":css/structure.qss");

    // Keep this for testing purposes
    /*QFontDatabase db;
    for(int i=0; i<db.families().size(); i++)
    {
      qDebug() << db.families().at(i);
    }*/
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    a.setStyleSheet(styleSheet);
    MicroManage w;
    QTimer::singleShot(2500, splash, SLOT(close()));
    QTimer::singleShot(2500, &w, SLOT(show()));
    //w.show();
    //splash.finish(&w);
    return a.exec();
}
