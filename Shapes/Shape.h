#ifndef LINE_SHAPE_H
#define LINE_SHAPE_H
#include <vector>
#include "Line.h"


class Shape {
protected:
    vector<Line> lines = vector<Line>();

public:

    void setLines(vector<Line>& l) {
        lines = l;
    }
    const vector<Line>& getLines() const {
        return lines;
    }


    virtual double calcArea() const = 0;
    virtual  double calcCircum() const = 0;



    Shape(const vector<Line>& lines) {
        this->lines = lines;
    }
    Shape() = default;
    virtual ~Shape() = default;
};
#endif //LINE_SHAPE_H