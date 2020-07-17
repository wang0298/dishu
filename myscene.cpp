#include "myscene.h"
#include<stdlib.h>


myScene::myScene(QObject *parent) : QGraphicsScene(parent)
{
    int w=192,h=166;
    for(int i=0;i<16;i++){
        this->item[i]=new myItem;
        this->item[i]->setPos(i/4*item[i]->boundingRect().width(),i%4*this->item[i]->boundingRect().height());
        this->addItem(this->item[i]);
    }
    this->ptimer=new QTimer;
    connect(this->ptimer,SIGNAL(timeout()),this,SLOT(showMouse()));

}

void myScene::showMouse()
{
    for(int i=0;i<16;i++){
        this->item[i]->setpic(":bg/zzr/p7.png");
        this->item[i]->setMouse(false);
    }


    //随机
    int count =rand()%3+1;
    for(int i=0;i<count;i++){
        int index=rand()%16;
        this->item[index]->setpic(":/bg/zzr/p8.png");
        this->item[index]->setMouse(true);   }

}

void myScene::startGame()
{
    int i=0;
    for(i=0;i<16;++i)
    {
        this->item[i]->setStart(true);
    }
    this->ptimer->start(1000);
}

void myScene::pauseGame()
{
    int i=0;
    for(i=0;i<16;++i)
    {
        this->item[i]->setStart(false);
    }
    this->ptimer->stop();
}

void myScene::stopGame()
{
    int i=0;
    for(i=0;i<16;++i)
    {
        this->item[i]->setStart(false);
    }
    this->ptimer->stop();

    for(int i=0;i<16;i++){

        this->item[i]->setpic(":bg/zzr/p7.png");
        this->item[i]->setMouse(false);
    }

}































