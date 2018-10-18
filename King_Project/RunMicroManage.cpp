#include "micromanage.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MicroManage w;
    w.show();

    return a.exec();
}
