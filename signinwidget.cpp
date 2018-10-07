#include "signinwidget.h"
#include<passworddontmatch.h>
#include<usernamenotfound.h>

signInWidget::signInWidget(QWidget *parent) : QWidget(parent)
{
    username = new QLabel("Username");
    password = new QLabel("Password");
    usernameEdit = new QLineEdit();
    passwordEdit = new QLineEdit();
    passwordEdit->setEchoMode(QLineEdit::Password);
    login = new QPushButton("login");
    check_validity = new QPushButton("check");
    verticalLayout = new QVBoxLayout();
    gridLayout = new QGridLayout();
    setVerticalLayout();
    setLayout(verticalLayout);
    login->setEnabled(false);
    connect(check_validity,SIGNAL(clicked(bool)),this,SLOT(check()));

}


void signInWidget::setGridLayout()
{

    gridLayout->addWidget(username,0,0,1,2);
    gridLayout->addWidget(usernameEdit,1,0,1,2);
    gridLayout->addWidget(password,2,0,1,2);
    gridLayout->addWidget(passwordEdit,3,0,1,2);
}

void signInWidget::setVerticalLayout()
{
    setGridLayout();
    verticalLayout->addItem(gridLayout);
    verticalLayout->addWidget(check_validity);
    verticalLayout->addWidget(login);
}
void signInWidget :: check()
{
    QFile file("data.txt");
    bool temp = false ;
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);

        while(!in.atEnd() ) {
            QString line = in.readLine();

            if(line.contains(usernameEdit->text()+";"+passwordEdit->text())){
                temp=true;
                login->setEnabled(true);
            }else
                if(line.contains(usernameEdit->text() )&& !line.contains(";"+passwordEdit->text())){
                    passwordDontMatch *message= new passwordDontMatch();
                    message->show();
                    login->setEnabled(false);
                    break;
                }

        }
        file.close();
        if(!temp)
        {
            usernameNotFound *message= new usernameNotFound();
            message->show();
            login->setEnabled(false);
        }


    }

}

