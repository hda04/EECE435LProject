#include <QApplication>
#include <QtWidgets>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <gamesLayoutView.h>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);
    gamesLayoutView *view= new gamesLayoutView();
    view->show();

    return app.exec();
}
