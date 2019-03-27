#include "game.h"
#include <QPixmap>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QSize>
#include <QColor>
Game::Game()
{
    //Making the scene
    scene = new QGraphicsScene();
    //scene->setSceneRect(0,0,1600,1200);

    //Making the view
    setFixedSize(1300,860);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setScene(scene);

    //Setting the color
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(QColor("#FFF0C0"));
    setBackgroundBrush(brush);
}

void Game::displayBoard(){
    QPixmap imgPixmap(":/moulin.png");
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(imgPixmap.scaled(QSize(800,800)));
    scene->addItem(item);
    show();
}




