#include "Circleclass.h"

namespace shapes {
Circle::Circle() : radius(0.0) {}

Circle::Circle(double radius) : radius(radius) {}

Circle::~Circle() {}

double Circle::getradius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}
} 