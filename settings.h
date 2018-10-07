#ifndef SETTINGS_H
#define SETTINGS_H

#include <QObject>
#include <QWidget>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class settings: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit settings(QObject *parent = nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:

public slots:

};

#endif // SETTINGS_H
