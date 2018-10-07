#ifndef SIGNINSCENE_H
#define SIGNINSCENE_H

#include <QWidget>
#include <QObject>
#include<QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include<settings.h>
#include<profilepic.h>
#include<back.h>
#include <signinwidget.h>
#include <QFile>


class signInScene : public QGraphicsScene
{
public:
    signInScene();
    QGraphicsScene *mainScene;
    back *backbutton;
    settings *settingsbutton;
    signInWidget* signIn;
    void readData();

    public slots:
};

#endif // SIGNINSCENE_H
