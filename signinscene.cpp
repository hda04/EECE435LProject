#include "signinscene.h"

signInScene::signInScene()
{
    mainScene = new QGraphicsScene();

    backbutton= new back();
    mainScene->addWidget(backbutton);

    settingsbutton= new settings();
    mainScene->addItem(settingsbutton);

    signIn = new signInWidget();
    signIn->setAttribute(Qt::WA_TranslucentBackground);
    mainScene->addWidget(signIn);
}

