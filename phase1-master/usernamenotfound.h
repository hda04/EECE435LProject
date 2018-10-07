#ifndef USERNAMENOTFOUND_H
#define USERNAMENOTFOUND_H

#include <QObject>
#include <QWidget>

class usernameNotFound : public QWidget
{
    Q_OBJECT
public:
    QString name;
    QString message;
    usernameNotFound();
signals:

public slots:
};


#endif // USERNAMENOTFOUND_H
