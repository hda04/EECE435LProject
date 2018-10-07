#include "graphicsSceneWrapper.h"

graphicsSceneWrapper::graphicsSceneWrapper()

{
    mainScene = new QGraphicsScene();

    backbutton= new back();
    mainScene->addWidget(backbutton);

    profilepicbutton= new profilepic();
    mainScene->addItem(profilepicbutton);

    settingsbutton= new settings();
    mainScene->addItem(settingsbutton);

    logo= new QGraphicsPixmapItem();
    logo->setPos(185,-75);
    logo->setPixmap((QPixmap(":images/logo.jpg")).scaled(400,150));
    mainScene->addItem(logo);

    Game1Button=new QPushButton("Game1");
    Game1Button->setGeometry(185,100,400,50);
    mainScene->addWidget(Game1Button);

    Game2Button=new QPushButton("Game2");
    Game2Button->setGeometry(185,175,400,50);
    mainScene->addWidget(Game2Button);

    Game3Button=new QPushButton("Game3");
    Game3Button->setGeometry(185,250,400,50);
    mainScene->addWidget(Game3Button);

    username= new  QLabel("Hussein Alaalamy");
    username->setGeometry(10,-120,150,50);
    username->setAttribute(Qt::WA_TranslucentBackground);
    mainScene->addWidget(username);

    XP= new  QLabel("Experience Points: XP");
    XP->setGeometry(10,-80,150,40);
    XP->setAttribute(Qt::WA_TranslucentBackground);
    mainScene->addWidget(XP);

}
