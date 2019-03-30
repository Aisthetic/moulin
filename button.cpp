#include "Button.h"
#include <QString>
#include <QGraphicsItem>
#include <QBrush>
#include <QPixmap>
#include <QImage>
#include <QPainter>
#include <QSize>
#include <Qt>
#include <QApplication>

Button::Button(QString name,QString source,QGraphicsItem *parent):  QGraphicsPixmapItem(QPixmap(source).scaled(QSize(356,200)),parent)
{
    this->name = name;
    setAcceptHoverEvents(true);
}

void Button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event)
    emit clicked();

}

void Button::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    //change cursor
    if(event){
        QApplication::setOverrideCursor(Qt::PointingHandCursor);
    }
}
void Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
    //change cursor
    if(event){
        QApplication::setOverrideCursor(Qt::ArrowCursor);
    }
}
