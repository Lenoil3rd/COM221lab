#include "Squareclass.h"

namespace shapes{
    Square::Square():sideLength(0.0){}

    Square::Square(double sideLength): sideLength(sideLength){}

    Square::~Square(){}

    double Square::getSideLength()const {
        return sideLength;        
    }

    void Square::setSideLength(double sideLength){
        this -> sideLength = sideLength;
    }
}

