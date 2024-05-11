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

class Area {
    public:    
    static double calcCircleArea(const shapes::Circle& circle){
        return   3.14159 * circle.getradius() * circle.getradius();  
    }
};