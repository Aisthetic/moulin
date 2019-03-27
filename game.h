#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>

class Game:public QGraphicsView
{
    //Scene
    QGraphicsScene *scene;

public:
    //Constructors
    Game();

    //Visual methods
    void displayBoard();
};

#endif // GAME_H
