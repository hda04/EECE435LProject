#ifndef EMAILFOUNDMESSAGE_H
#define EMAILFOUNDMESSAGE_H


#include <QObject>
#include <QWidget>

class emailFoundMessage : public QWidget
{
    Q_OBJECT
public:
    QString name;
    QString message;
    emailFoundMessage();
signals:

public slots:
};

#endif // EMAILFOUNDMESSAGE_H
