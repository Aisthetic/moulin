#ifndef BUTTON_H
#define BUTTON_H
#include <QObject>
#include <QGraphicsItem>
class Button:public QObject, public  QGraphicsPixmapItem
{
     Q_OBJECT
    QString name;
    QGraphicsItem *parent;
public:
    Button(QString name,QString source = ":/Button.png",QGraphicsItem *parent = nullptr);
    //events
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void clicked();
};

#endif // BUTTON_H
