#ifndef LINE_TRIANGLE_H
#define LINE_TRIANGLE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class Triangle: public Shape {
private:
    double H = 0;
public:

    [[nodiscard]]
    double getH() const { return H; }
    void setH(double h) { H = h; }

    [[nodiscard]]
    double calcCircum() const override {
        if (lines.size() != 3) return 0.0;
        return lines[0].mod() + lines[1].mod() + lines[2].mod();
    };

    [[nodiscard]]
    double calcArea() const override {
        if (lines.size() != 3) return 0.0;
        double a = lines[0].mod();
        double b = lines[1].mod();
        double c = lines[2].mod();

        double p = calcCircum()/2;

        return sqrt(p * (p - a) * (p - b) * (p - c));
    };

    [[nodiscard]]
    double calcH() const {
        if (lines.size() != 3) return 0.0;
        double a = lines[0].mod();
        return (2*calcArea())/a;

    }


    Triangle(const vector<Line>& lines): Shape(lines)  {};
    Triangle(int H, const vector<Line>& lines): Shape() {
        this->H = H;
        this->lines = lines;
    }




};

#endif //LINE_TRIANGLE_H