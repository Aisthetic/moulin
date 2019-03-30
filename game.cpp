#include "game.h"
#include <QPixmap>
#include <QImage>
#include <QGraphicsPixmapItem>
#include <QSize>
#include <QColor>
#include <button.h>
#include <QString>
#include <QEvent>
#include <QDebug>
//Window's width without the scorebar is roughly 950
Game::Game()
{
    //Making the scene
    scene = new QGraphicsScene();
    //scene->setSceneRect(0,0,1600,1200);

    //Making the view
    setFixedSize(1366,768);
    setScene(scene);
    viewport()->installEventFilter(this);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    displayBoard();
    displayMenu();
}

void Game::displayBoard(){
    QPixmap imgPixmap(":/background.png");
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(imgPixmap.scaled(QSize(1366,768)));
    item->setZValue(-0.1);
    scene->addItem(item);
    show();
}

bool Game::eventFilter(QObject *object, QEvent *event)
{
    if (object == viewport() && event->type() == QEvent::Wheel) {
        qDebug() << "Scroll disabled";
        return true;
    }
    return false;
}

void Game::displayMenu(){
    int menuOffset = 100;//absolute vertical position of the menu
    int offset = 173 + menuOffset; //relative position of the first button
    int shift = 110;//distance between 2 buttons

    //Pvp button
    pvpBt = new Button("pvp",":/pvpButtonResized.png");
    pvpBt->setPos(950/2-150,offset);
    addToScene(pvpBt);

    //AlphaBeta AI button
    alphaBt = new Button("pvp",":/buttonAplhaBeta.png");
    alphaBt->setPos(950/2-150,offset+shift);
    addToScene(alphaBt);

    //MiniMax AI button
    miniBt = new Button("pvp",":/buttonMinMax.png");
    miniBt->setPos(950/2-150,offset+2*shift);
    addToScene(miniBt);

    //Instructions Button
    instBt = new Button("pvp",":/buttonInstructions.png");
    instBt->setPos(950/2-150,offset+3*shift);
    addToScene(instBt);

    //Show tokens
    QGraphicsPixmapItem* itemDora = new QGraphicsPixmapItem(QPixmap(":/dora.png").scaled(QSize(300,200)));
    itemDora->setPos(162,menuOffset);
    scene->addItem(itemDora);

    QGraphicsPixmapItem* itemMouzaw = new QGraphicsPixmapItem(QPixmap(":/mouzaw.png").scaled(QSize(300,200)));
    itemMouzaw->setPos(500,menuOffset);
    scene->addItem(itemMouzaw);

}

void Game::addToScene(QGraphicsItem *item)
{
    scene->addItem(item);
}





