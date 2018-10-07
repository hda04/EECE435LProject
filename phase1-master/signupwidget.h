#ifndef SIGNUPWIDGET_H
#define SIGNUPWIDGET_H

#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QVBoxLayout>
#include <QGridLayout>
#include <qgroupbox.h>
#include <QFile>
#include <QTextStream>

class signUpWidget : public QWidget
{
    Q_OBJECT
public:
    QLabel *fname, *lname, *gender, *email, *username, *password, *cpassword;
    QLineEdit *fnameEdit, *lnameEdit, *emailEdit, *usernameEdit, *passwordEdit, *cpasswordEdit;
    QRadioButton *maleGenderRadioButton, *femaleGenderRadioButton;
    QPushButton *submit,*checkinfo;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    explicit signUpWidget(QWidget *parent = nullptr);
    void setVerticalLayout();
    void setGridLayout();
    bool checkValidUsername();

signals:

public slots:
    void checkPass();
    void submitButtonPress();
};

#endif // SIGNUPWIDGET_H
