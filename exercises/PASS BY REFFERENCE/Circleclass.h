#pragma once

namespace shapes{    
    class Circle{
        private:
        double radius;
        public:
        Circle();
        Circle(double radius): radius(radius){};
        ~Circle();
        double getradius(double radius)const{
            return radius;
        };

    };
}
