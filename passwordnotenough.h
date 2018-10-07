#ifndef PASSWORDNOTENOUGH_H
#define PASSWORDNOTENOUGH_H


#include <QObject>
#include <QWidget>

class passwordNotEnough : public QWidget
{
    Q_OBJECT
public:
    QString name;
    QString message;
    passwordNotEnough();
signals:

public slots:
};

#endif // PASSWORDNOTENOUGH_H
