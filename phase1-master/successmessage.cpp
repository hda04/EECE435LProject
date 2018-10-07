#include "successmessage.h"
#include<QtWidgets>


successMessage::successMessage()
{
    message= QString("You have successfully created an account");
    QLabel *label= new QLabel(message);
    QVBoxLayout *minorlayout= new QVBoxLayout();
    minorlayout->addWidget(label);
    setLayout(minorlayout);
}
