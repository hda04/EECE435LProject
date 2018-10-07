#ifndef GAME1SCENE_H
#define GAME1SCENE_H

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
#include<graphicsSceneWrapper.h>

class game1Scene: public QGraphicsScene
{
public:
    game1Scene();
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

signals:

public slots:
    void back_button();
};

#endif // GAME1SCENE_H
