#ifndef HANDLER_H
#define HANDLER_H

#include <QObject>

class handler : public QObject
{
    Q_OBJECT

public:
    static handler *getinstance();
    void addScore();
private:
    explicit handler(QObject *parent = nullptr);

signals:
    void beatmouse();
public slots:

private:
    static handler *hand;
};

#endif // HANDLER_H
