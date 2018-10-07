#include "usernamenotfound.h"
#include<QtWidgets>



usernameNotFound :: usernameNotFound()
{
    message= QString("username Not Found!");
    QLabel *label= new QLabel(message);
    QVBoxLayout *minorlayout= new QVBoxLayout();
    minorlayout->addWidget(label);
    setLayout(minorlayout);
}
