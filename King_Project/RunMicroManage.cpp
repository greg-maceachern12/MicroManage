#include "micromanage.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setAttribute(Qt::AA_UseHighDpiPixmaps);
    MicroManage w;
    w.show();

    return a.exec();
}
