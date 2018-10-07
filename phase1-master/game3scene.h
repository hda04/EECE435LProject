#ifndef GAME3SCENE_H
#define GAME3SCENE_H

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

class game3scene:public QGraphicsScene
{
public:
    game3scene();
    back *backbutton;
    profilepic *profilepicbutton;
    settings *settingsbutton;
    QLabel *username;
    QLabel *XP;
    QPushButton *start;
    QPushButton *resume;
    QPushButton *levels;
    QPushButton *leaderboard;
    QGraphicsPixmapItem *logo;

};

#endif // GAME3SCENE_H
