#include <QApplication>
#include "game.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Game *game;
    game = new Game();
    game->show();
    game->displayBoard();
    return a.exec();
}
