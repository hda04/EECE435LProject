#ifndef GAMESLAYOUT_H
#define GAMESLAYOUT_H

#include <QObject>
#include <QWidget>
#include<QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QIcon>
#include<back.h>
#include<settings.h>
#include<profilepic.h>
#include<game1scene.h>
#include<game2scene.h>
#include<game3scene.h>
#include<graphicsSceneWrapper.h>
#include <homescene.h>
#include <signupwidget.h>
#include <QGraphicsScene>
#include <signupscene.h>
#include <signinscene.h>

class gamesLayoutView : public QGraphicsView
{
    Q_OBJECT
public:
   gamesLayoutView();
   graphicsSceneWrapper *mainScene;
   signUpWidget *signUp;

signals:

public slots:
   void game1Button();
   void game2Button();
   void game3Button();
   void back_button();
   void setHome();
   void menuButton();
   void setSignUpPage();
   void setSignInPage();
   void logInButtonPress();
   void back_button_tohomescene();
   void playAsGuest();


};

#endif // GAMESLAYOUT_H
