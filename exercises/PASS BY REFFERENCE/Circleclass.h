#pragma once

namespace shapes{    
    class Circle{
        private:
        double radius;
        public:
        Circle();
        Circle(double radius);
        ~Circle();        
        double getradius(double radius);
        void setRadius(double radius);
    };
};


  