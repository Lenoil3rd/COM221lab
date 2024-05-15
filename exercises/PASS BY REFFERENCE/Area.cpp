#include "Area.h"
#include "SquareClass.h"
#include "TriangleClass.h"
#include "CircleClass.h"

double Area::calcSquareArea(const shapes::Square& square) {
    return square.getSideLength() * square.getSideLength();
}

double Area::calcTriangleArea(const shapes::Triangle& triangle) {
    return 0.5 * triangle.getbase() * triangle.getheight();
}

double Area::calcCircleArea(const shapes::Circle& circle) {
    return 3.14159 * circle.getradius() * circle.getradius();
}