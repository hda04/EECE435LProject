#include "passwordnotenough.h"
#include<QtWidgets>

passwordNotEnough:: passwordNotEnough()
{
    message= QString("Password should contain at least 8 characters");
    QLabel *label= new QLabel(message);
    QVBoxLayout *minorlayout= new QVBoxLayout();
    minorlayout->addWidget(label);
    setLayout(minorlayout);
    show();
}
