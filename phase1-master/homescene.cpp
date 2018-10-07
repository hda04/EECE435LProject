#include "homescene.h"

homeScene::homeScene()
{
    mainScene = new QGraphicsScene();

    backbutton= new back();
    mainScene->addWidget(backbutton);
    backbutton->hide();

    settingsbutton= new settings();
    mainScene->addItem(settingsbutton);

    signUp = new QPushButton("Sign up");
    signUp->setGeometry(185,100,400,50);
    mainScene->addWidget(signUp);

    signIn = new QPushButton("Sign in");
    signIn->setGeometry(185,175,400,50);
    mainScene->addWidget(signIn);

    asGuest = new QPushButton("Play as a guest");
    asGuest->setGeometry(185,250,400,50);
    mainScene->addWidget(asGuest);
}
