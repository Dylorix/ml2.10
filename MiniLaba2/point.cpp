#include "point.h"

Point::Point()
{

}

int Point::getX() const
{
    return x;
}

void Point::setX(int newX)
{
    x = newX;
}

int Point::getY() const
{
    return y;
}

void Point::setY(int newY)
{
    y = newY;
}

int Point::getW() const
{
    return w;
}

void Point::setW(int newW)
{
    w = newW;
}

int Point::getSize() const
{
    return size;
}

void Point::setSize(int newSize)
{
    size = newSize;
}

void Point::draw(QPainter *painter)
{
    QPen pen(Qt::black);
    pen.setWidth(w);
    painter->setPen(pen);
    painter->drawLine(x-size,y,x+size,y);
    painter->drawLine(x,y-size,x,y+size);
}

void Point::connection(QPainter *painter, Point *point)
{
    painter->drawLine(point->getX(),point->getY(),this->getX(),this->getY());
}

float Point::distance2(const QPoint &point)
{
    float dx = (point.x() - this->getX())*(point.x() - this->getX());
    float dy = (point.y() - this->getY())*(point.y() - this->getY());
    return (dx + dy);
}
