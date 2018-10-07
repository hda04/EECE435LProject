#include "usernamefoundmessage.h"
#include<QtWidgets>


usernameFoundMessage :: usernameFoundMessage()
{
    message= QString("Username Already Exists");
    QLabel *label= new QLabel(message);
    QVBoxLayout *minorlayout= new QVBoxLayout();
    minorlayout->addWidget(label);
    setLayout(minorlayout);
}
