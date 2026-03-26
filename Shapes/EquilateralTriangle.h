#ifndef LINE_EQUILATERALTRIANGLE_H
#define LINE_EQUILATERALTRIANGLE_H
#include "Triangle.h"


class EquilateralTriangle final : public Triangle {
public:
    EquilateralTriangle(const vector<Line>& lines) : Triangle(lines) {};
    EquilateralTriangle(const vector<Line>& lines, const int H) : Triangle(H, lines) {};

};


#endif //LINE_EQUILATERALTRIANGLE_H