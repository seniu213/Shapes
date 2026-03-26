#ifndef LINE_SQUARE_H
#define LINE_SQUARE_H
#include <iostream>
#include "Rectangle.h"
using namespace std;

class Square final: public Rectangle {
    public:

    double calcArea() const override {
        if (lines.size() != 4) return 0.0;
        return lines[0].mod() * lines[1].mod();
    };

    double calcCircum() const override {
        if (lines.size() != 4) return 0.0;
        return lines[0].mod()*4;
    };




    Square(const vector<Line>& lines): Rectangle(lines) {};

};



#endif //LINE_SQUARE_H