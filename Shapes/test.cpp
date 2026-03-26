#include <iostream>
#include <vector>
#include "Shape.h"
#include "Line.h"
#include "Point.h"
#include "Rectangle.h"
using namespace std;



int main2() {

    Point* p1 = new Point(1, 3);
    Point* p2 = new Point(2, 3);
    Point* p3 = new Point(3, 3);
    Point* p4 = new Point(4, 3);

    Line* l1 = new Line(*p1, *p2);
    Line* l2 = new Line(*p3, *p4);

    vector<Line> lines1 = vector<Line>();
    lines1.push_back(*l1);
    lines1.push_back(*l2);

    Rectangle r = Rectangle(lines1);

    return 0;

    }






