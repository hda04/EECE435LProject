#include "signupscene.h"

signUpScene::signUpScene()
{
    mainScene = new QGraphicsScene();

    backbutton= new back();
    mainScene->addWidget(backbutton);

    settingsbutton= new settings();
    mainScene->addItem(settingsbutton);

    signUp = new signUpWidget();
    signUp->setAttribute(Qt::WA_TranslucentBackground);
    mainScene->addWidget(signUp);
}


