#ifndef LINE_ISOSCELESTRIANGLE_H
#define LINE_ISOSCELESTRIANGLE_H

#include "Triangle.h"

class IsoscelesTriangle final: public Triangle {
    public:

    IsoscelesTriangle(const vector<Line>& lines ) : Triangle(lines) {};
    IsoscelesTriangle(const vector<Line>& lines, const int H ) : Triangle(H, lines) {};

};

#endif //LINE_ISOSCELESTRIANGLE_H