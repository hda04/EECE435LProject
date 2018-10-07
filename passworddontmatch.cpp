#include "passworddontmatch.h"
#include<QtWidgets>

passwordDontMatch :: passwordDontMatch()
{
    message= QString("password Don't Match");
    QLabel *label= new QLabel(message);
    QVBoxLayout *minorlayout= new QVBoxLayout();
    minorlayout->addWidget(label);
    setLayout(minorlayout);

}

