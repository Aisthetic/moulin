#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include "button.h"
class Game:public QGraphicsView
{
    //Scene
    QGraphicsScene *scene;

public:
    //Constructors
    Game();

    //Visual methods
    void displayBoard();
    void displayMenu();
    void addToScene(QGraphicsItem *item);

    //Menu buttons
    Button *pvpBt,*alphaBt,*miniBt,*instBt;

    //Event filters
    bool eventFilter(QObject *object, QEvent *event);
};

#endif // GAME_H
