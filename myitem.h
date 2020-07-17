#ifndef MYITEM_H
#define MYITEM_H
#include<QGraphicsPixmapItem>
#include<QString>
#include<QGraphicsSceneMouseEvent>
class myItem : public QGraphicsPixmapItem
{
public:
    myItem();
    void setpic(QString path);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void setMouse(bool mouse);
    bool isMouse();
    void setStart(bool start);
    bool isstart();

private:
    bool Mouse;
    bool start;
};

#endif // MYITEM_H
