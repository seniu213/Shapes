#include <iostream>
#include <vector>
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    //Triangle
    Point A(0, 0);
    Point B(4, 0);
    Point C(0, 3);

    Line l1, l2, l3;
    l1.setA(A); l1.setB(B);
    l2.setA(B); l2.setB(C);
    l3.setA(C); l3.setB(A);

    shapes.push_back(new Triangle({l1, l2, l3}));

    //IsoscelesTriangle

    Point I1(0, 0);
    Point I2(6, 0);
    Point I3(3, 4);

    Line i1, i2, i3;
    i1.setA(I1); i1.setB(I2);
    i2.setA(I2); i2.setB(I3);
    i3.setA(I3); i3.setB(I1);


    shapes.push_back(new IsoscelesTriangle({i1, i2, i3}));

    // EquilateralTriangle
    Point E1(0, 0);
    Point E2(2, 0);
    Point E3(1, sqrt(3));

    Line e1, e2, e3;
    e1.setA(E1); e1.setB(E2);
    e2.setA(E2); e2.setB(E3);
    e3.setA(E3); e3.setB(E1);

    shapes.push_back(new EquilateralTriangle({e1, e2, e3}));

    // Rectangle
    Point R1(0, 0);
    Point R2(4, 0);
    Point R3(4, 2);
    Point R4(0, 2);

    Line r1, r2, r3, r4;
    r1.setA(R1); r1.setB(R2);
    r2.setA(R2); r2.setB(R3);
    r3.setA(R3); r3.setB(R4);
    r4.setA(R4); r4.setB(R1);

    shapes.push_back(new Rectangle({r1, r2, r3, r4}));

    //Square
    Point S1(0, 0);
    Point S2(2, 0);
    Point S3(2, 2);
    Point S4(0, 2);

    Line s1, s2, s3, s4;
    s1.setA(S1); s1.setB(S2);
    s2.setA(S2); s2.setB(S3);
    s3.setA(S3); s3.setB(S4);
    s4.setA(S4); s4.setB(S1);

    shapes.push_back(new Square({s1, s2, s3, s4}));


    for (Shape* shape : shapes) {
        cout << "Area: " << shape->calcArea() << endl;
        cout << "Circum: " << shape->calcCircum() << endl;
        cout << "------------------------" << endl;
    }


    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}