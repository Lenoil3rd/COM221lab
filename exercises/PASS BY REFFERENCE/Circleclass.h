#pragma once

namespace shapes{    
    class Circle{
        private:
        double radius;
        public:
        Circle();
        Circle(double radius);
        ~Circle();        
        double getradius()const;
        void setRadius(double radius);
    };
};


  