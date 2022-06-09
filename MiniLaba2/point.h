#ifndef POINT_H
#define POINT_H
#include <QPainter>


class Point
{
public:
    Point();
    Point(int x, int y, int w=1, int size=1)
        :x(x),y(y), w(w),size(size) {}
    int getX() const;
    void setX(int newX);

    int getY() const;
    void setY(int newY);

    int getW() const;
    void setW(int newW);

    int getSize() const;
    void setSize(int newSize);

    void draw(QPainter *painter);

    void connection(QPainter *painter,Point *point);

    float distance2(const QPoint &point);

private:
    int x,y,w,size;
};

#endif // POINT_H
