#ifndef PROFILEPIC_H
#define PROFILEPIC_H

#include <QObject>
#include <QWidget>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class profilepic: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit profilepic(QObject *parent = nullptr);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:

public slots:

};

#endif // PROFILEPIC_H
