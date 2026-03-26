#ifndef UNTITLED_LINE_H
#define UNTITLED_LINE_H
#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;


class Line {
    public:
    Point* A[2] = { nullptr, nullptr };


    double mod() const {
        return sqrt(
            pow(A[1]->x - A[0]->x, 2) +
            pow(A[1]->y - A[0]->y, 2)
        );
    }


    void setA(Point const aa) {
        if (aa.x >=0 && aa.y >= 0) A[0] = new Point(aa);
    }
    void setB(Point const bb) {
        if (bb.x >= 0 && bb.y >= 0) A[1] = new Point(bb);
    }
    Point getA() {
        return *A[0];

    }
    Point getB() {
        return *A[1];
    }




    Line(Point aa, Point bb) {
        setA(aa);
        setB(bb);
    }
    Line() = default;
};
#endif //UNTITLED_LINE_H