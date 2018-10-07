#include "settings.h"

settings::settings(QObject *parent) : QObject(parent)
{
    this->setPos(850,-110);
    this->setPixmap((QPixmap(":images/settings.png")).scaled(50,60));
}
void settings :: mousePressEvent(QGraphicsSceneMouseEvent *event)
{
}
