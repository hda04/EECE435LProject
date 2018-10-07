#include "back.h"

back::back()
{
    this->setIcon(QIcon(QPixmap(":images/backButton.png")));
    this->setIconSize(QSize(50,60));
    this->setGeometry(-110,400,50,60);
}
