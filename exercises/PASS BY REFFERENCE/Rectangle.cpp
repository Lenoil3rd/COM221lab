#include "Rectangle.h"

Rectangle :: Rectangle() : Rect_Length(0.0),Rect_Width(0.0){}

Rectangle ::~Rectangle() {}

void Rectangle :: assignLength(double length){
    Rect_Length= length;

}
double Rectangle:: getLength() const {
    return Rect_Length;
}

double Rectangle::getWidth()const{
    return Rect_Width;
}

double Rectangle:: area() const{
    return Rect_Length * Rect_Width;
}