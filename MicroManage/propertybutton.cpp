#include "propertybutton.h"

propertybutton::propertybutton(QWidget* parent)
{
    itsparent = parent;
    connect(this,SIGNAL(clicked()),this,SLOT(removeOne()));

}

void propertybutton::removeOne(){
    emit remove(itsparent);
}
