#include "game2scene.h"

game2scene::game2scene()
{
    backbutton= new back();
    this->addWidget(backbutton);

    profilepicbutton= new profilepic();
    this->addItem(profilepicbutton);

    settingsbutton= new settings();
    this->addItem(settingsbutton);

    username= new  QLabel("Hussein Alaalamy");
    username->setGeometry(10,-120,150,50);
    username->setAttribute(Qt::WA_TranslucentBackground);
    this->addWidget(username);

    XP= new  QLabel("Experience Points: XP");
    XP->setGeometry(10,-80,150,40);
    XP->setAttribute(Qt::WA_TranslucentBackground);
    this->addWidget(XP);

    start= new QPushButton("Start New Game");
    start->setGeometry(185,100,400,50);
    this->addWidget(start);

    resume= new QPushButton("Continue");
    resume->setGeometry(185,175,400,50);
    this->addWidget(resume);

    levels= new QPushButton("LEVELS");
    levels->setGeometry(185,250,400,50);
    this->addWidget(levels);

    leaderboard = new QPushButton("LeaderBoards");
    leaderboard->setGeometry(185,325,400,50);
    this->addWidget(leaderboard);

    logo = new QGraphicsPixmapItem();
    logo->setPos(310,-75);
    logo->setPixmap((QPixmap(":images/joystick")).scaled(150,150));
    this->addItem(logo);
}
