#include "profilepic.h"

profilepic::profilepic(QObject *parent) : QObject(parent)
{
    this->setPos(-110,-110);
    this->setPixmap((QPixmap(":images/DP.jpg")).scaled(100,100));
}
void profilepic :: mousePressEvent(QGraphicsSceneMouseEvent *event)
{
}
