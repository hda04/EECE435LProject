#ifndef PASSWORDDONTMATCH_H
#define PASSWORDDONTMATCH_H


#include <QObject>
#include <QWidget>

class passwordDontMatch : public QWidget
{
    Q_OBJECT
public:
    QString name;
    QString message;
    passwordDontMatch();
signals:

public slots:
};

#endif // PASSWORDDONTMATCH_H
