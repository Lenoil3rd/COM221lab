#pragma once

namespace shapes{
    class Square{
        private:
       double sideLength;
       public:
       Square();
       Square(double sideLength):sideLength(sideLength){};
       ~Square();
       double getSideLength()const{
        return sideLength;
       };
    };
}

class Area {
    public:
    static double calcSquareArea(const shapes::Square& square){
        return  square.getSideLength() * square.getSideLength();
    }
};