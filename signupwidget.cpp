#include "signupwidget.h"
#include <usernamefoundmessage.h>
#include <emailfoundmessage.h>
#include<passworddontmatch.h>
#include <successmessage.h>
#include<passwordnotenough.h>

signUpWidget::signUpWidget(QWidget *parent) : QWidget(parent)
{
    fname = new QLabel("First Name");
    lname = new QLabel("Last Name");
    gender = new QLabel("Gender");
    email = new QLabel("Email");
    username = new QLabel("Username");
    password = new QLabel("Password");
    cpassword = new QLabel("Confirm Password");
    fnameEdit = new QLineEdit();
    lnameEdit = new QLineEdit();
    emailEdit = new QLineEdit();
    usernameEdit = new QLineEdit();
    passwordEdit = new QLineEdit();
    cpasswordEdit = new QLineEdit();
    passwordEdit->setEchoMode(QLineEdit::Password);
    cpasswordEdit->setEchoMode(QLineEdit::Password);
    maleGenderRadioButton = new QRadioButton("Male");
    femaleGenderRadioButton = new QRadioButton("female");
    checkinfo = new QPushButton("check Info");
    QObject::connect(checkinfo,SIGNAL(clicked(bool)),this,SLOT(checkPass()));
    submit = new QPushButton("submit");
    QObject::connect(submit,SIGNAL(clicked(bool)),this,SLOT(submitButtonPress()));
    submit->setEnabled(false);
    verticalLayout = new QVBoxLayout();
    gridLayout = new QGridLayout();
    setVerticalLayout();
    setLayout(verticalLayout);
}

void signUpWidget::setGridLayout()
{
    QGroupBox *box = new QGroupBox();
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(maleGenderRadioButton);
    vbox->addWidget(femaleGenderRadioButton);
    box->setLayout(vbox);

    gridLayout->addWidget(fname,0,0);
    gridLayout->addWidget(lname,0,1);
    gridLayout->addWidget(fnameEdit,1,0);
    gridLayout->addWidget(lnameEdit,1,1);
    gridLayout->addWidget(gender,2,0);
    gridLayout->addWidget(box,2,1);
    gridLayout->addWidget(email,3,0,1,2);
    gridLayout->addWidget(emailEdit,4,0,1,2);
    gridLayout->addWidget(username,5,0,1,2);
    gridLayout->addWidget(usernameEdit,6,0,1,2);
    gridLayout->addWidget(password,7,0);
    gridLayout->addWidget(cpassword,7,1);
    gridLayout->addWidget(passwordEdit,8,0);
    gridLayout->addWidget(cpasswordEdit,8,1);

}

void signUpWidget::setVerticalLayout()
{
    setGridLayout();
    verticalLayout->addItem(gridLayout);
    verticalLayout->addWidget(checkinfo);
    verticalLayout->addWidget(submit);
}

void signUpWidget::checkPass()
{
    if(passwordEdit->text() == cpasswordEdit->text() && !(passwordEdit->text().isEmpty())
            && !(fnameEdit->text().isEmpty()) && !(lnameEdit->text().isEmpty())
            && !(usernameEdit->text().isEmpty()) && !(emailEdit->text().isEmpty())
            && (maleGenderRadioButton->isChecked() || femaleGenderRadioButton->isChecked())
            && checkValidUsername()
            && passwordEdit->text().length()>=8)
    {
        submit->setEnabled(true);
    }
    if(passwordEdit->text() != cpasswordEdit->text())
    {
        passwordDontMatch *message= new passwordDontMatch();
        message->show();
    }
    if(passwordEdit->text().length()<8)
    {
        passwordNotEnough *message= new passwordNotEnough();
        message->show();
    }

}

void signUpWidget::submitButtonPress()
{
    QFile file("data.txt");
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append))
        submit->setEnabled(false);
    QTextStream out(&file);

    QString data = usernameEdit->text() + ";";
    if(passwordEdit->text() == cpasswordEdit->text())
    {
        data = data + passwordEdit->text() + ";";
        data = data + fnameEdit->text() + ";";
        data = data + lnameEdit->text() + ";";
    }
    if(maleGenderRadioButton->isChecked())
    {
        data = data + "male;";
    } else if (femaleGenderRadioButton->isChecked())
    {
        data = data + "female;";
    }
    data = data + emailEdit->text() + ";";

    out << data << "\n";

    file.close();
    successMessage *message= new successMessage();
    message->show();
}
bool signUpWidget::checkValidUsername()
{
    QFile file("data.txt");
    if(file.open(QIODevice::ReadOnly)){
        QTextStream in(&file);

        while(!file.atEnd() ) {
            QString line = in.readLine();
            QStringList fields = line.split(";");
            if(fields[0] == usernameEdit->text()){
                usernameFoundMessage *message= new usernameFoundMessage();
                message->show();
                return false;
            }
            if(fields[5] == emailEdit->text())
            {
                emailFoundMessage *message= new emailFoundMessage();
                message->show();
                return false;
            }

        }

        file.close();
    }
    return true;
}
