#ifndef USERNAMEFOUNDMESSAGE_H
#define USERNAMEFOUNDMESSAGE_H


#include <QObject>
#include <QWidget>

class usernameFoundMessage : public QWidget
{
    Q_OBJECT
public:
    QString name;
    QString message;
    usernameFoundMessage();
signals:

public slots:
};


#endif // USERNAMEFOUNDMESSAGE_H
