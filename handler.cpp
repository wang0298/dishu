#include "handler.h"

handler::handler(QObject *parent) : QObject(parent)
{

}

handler *handler::hand =new handler;

handler *handler::getinstance()
{
    return hand;
}


void handler::addScore()
{
    emit beatmouse();
}
