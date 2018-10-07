#ifndef GAMEMENUVIEWER_H
#define GAMEMENUVIEWER_H

#include <QObject>
#include <QWidget>
#include<QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <gameslayoutScene.h>

class gameMenuViewer : public QGraphicsScene
{
public:
    gameMenuViewer(QGraphicsScene *scene);
};

#endif // GAMEMENUVIEWER_H
