#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H
#include <iostream>
using namespace std;


class Point {
    public:
    double x = 0;
    double y = 0;

    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }


    Point(double const xx, double const yy): x(xx), y(yy) {}
    Point(double const xx): x(xx), y(0) {}
    Point(): x(0), y(0) {}
};




#endif //UNTITLED_POINT_H