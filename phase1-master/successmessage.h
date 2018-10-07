#ifndef SUCCESSMESSAGE_H
#define SUCCESSMESSAGE_H



#include <QObject>
#include <QWidget>

class successMessage : public QWidget
{
    Q_OBJECT
public:
    QString name;
    QString message;
    successMessage();
signals:

public slots:
};

#endif // SUCCESSMESSAGE_H
