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