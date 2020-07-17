#include "myitem.h"
#include<QPixmap>
#include<QDebug>
#include"handler.h"
#include<QCursor>


myItem::myItem()
{
    this->setPixmap(QPixmap(":bg/zzr/p7.png"));
    this->start=false;
    this->Mouse=false;
    this->setCursor(QCursor(QPixmap(":/bg/zzr/p9.png")));
}

void myItem::setpic(QString path)
{
    this->setPixmap(QPixmap(path));
}

void myItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    this->setCursor(QCursor(QPixmap(":/bg/zzr/p10.png")));
    if(this->isstart()){
         handler *hand =handler::getinstance();
         if(this->isMouse()){
             hand->addScore();

             this->setPixmap(QPixmap(":/bg/zzr/p250.png"));
             this->Mouse=false;

         }else{

         }
      }
}

void myItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    this->setCursor(QCursor(QPixmap(":/bg/zzr/p9.png")));
}



void myItem::setMouse(bool mouse)
{
    this->Mouse=mouse;
}

bool myItem::isMouse()
{
    return this->Mouse;
}

void myItem::setStart(bool start)
{
    this->start=start;
}

bool myItem::isstart()
{
    return this->start;
}
