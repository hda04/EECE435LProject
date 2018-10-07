#ifndef HOMESCENE_H
#define HOMESCENE_H

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

class homeScene : public QGraphicsScene
{
public:
    homeScene();
    QGraphicsScene *mainScene;
    back *backbutton;
    settings *settingsbutton;
    QPushButton* signUp;
    QPushButton* signIn;
    QPushButton* asGuest;
};

#endif // HOMESCENE_H
