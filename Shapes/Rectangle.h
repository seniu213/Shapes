#ifndef LINE_RECTANGLE_H
#define LINE_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
    public:

    double calcArea() const override {
        if (lines.size() != 4) return 0;
        return lines[0].mod() * lines[1].mod();

    }

    double calcCircum() const override {
        if (lines.size() != 4) return 0;
        return lines[0].mod() + lines[1].mod() + lines[2].mod() + lines[3].mod();
    };




    Rectangle(const vector<Line>& lines): Shape(lines) {}


    };














#endif //LINE_RECTANGLE_H