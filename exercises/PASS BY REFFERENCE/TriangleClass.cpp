#include "Triangleclass.h"

namespace shapes {
    Triangle::Triangle(): base(0.0), height(0.0){}

    Triangle::Triangle(double base, double height) : base(base), height(height) {}

    Triangle::~Triangle() {}

    double Triangle::getbase() const {
        return base;
    }

    void Triangle::setbase(double base) {
        this->base = base;
    }

    double Triangle::getheight() const {
        return height;
    }

    void Triangle::setheight(double height) {
        this->height = height;
    }
}