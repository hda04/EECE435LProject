#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QObject>
#include <QWidget>
#include<QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include<settings.h>
#include<profilepic.h>
#include<back.h>

class graphicsSceneWrapper:public QGraphicsScene
{
public:
    graphicsSceneWrapper();
    QGraphicsScene *mainScene;
    back *backbutton;
    profilepic *profilepicbutton;
    settings *settingsbutton;
    QLabel *username;
    QLabel *XP;
    QPushButton *Game1Button;
    QPushButton *Game2Button;
    QPushButton *Game3Button;
    QGraphicsPixmapItem *logo;
};

#endif // MAINSCENE_H
