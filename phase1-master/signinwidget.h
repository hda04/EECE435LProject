#ifndef SIGNINWIDGET_H
#define SIGNINWIDGET_H


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
#include <graphicsSceneWrapper.h>

class signInWidget : public QWidget
{
    Q_OBJECT
public:
    QLabel *username, *password;
    QLineEdit *usernameEdit, *passwordEdit;
    QPushButton *login;
    QPushButton *check_validity;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    explicit signInWidget(QWidget *parent = nullptr);
    void setVerticalLayout();
    void setGridLayout();
signals:

public slots:
    void check();

};

#endif // SIGNINWIDGET_H
