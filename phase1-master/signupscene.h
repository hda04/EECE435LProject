#ifndef SIGNUPSCENE_H
#define SIGNUPSCENE_H

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
#include <signupwidget.h>
#include <QFile>


class signUpScene : public QGraphicsScene
{
public:
    signUpScene();
    QGraphicsScene *mainScene;
    back *backbutton;
    settings *settingsbutton;
    signUpWidget* signUp;
    void readData();

    public slots:
};

#endif // SIGNUPSCENE_H
