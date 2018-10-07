#include "emailfoundmessage.h"
#include<QtWidgets>


emailFoundMessage :: emailFoundMessage()
{
    message= QString("This Email already Exists!");
    QLabel *label= new QLabel(message);
    QVBoxLayout *minorlayout= new QVBoxLayout();
    minorlayout->addWidget(label);
    setLayout(minorlayout);

}

