#pragma once

namespace shapes{
    class Square{
        private:
       double sideLength;
       public:
       Square();
       Square(double sideLength);
       ~Square();
       double getSideLength()const;
       void setSideLength(double sideLength);
    };
};

