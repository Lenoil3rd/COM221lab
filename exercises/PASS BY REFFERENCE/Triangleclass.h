#pragma once

namespace shapes{
    class Triangle{
        private:
        double base;
        double height;
        public:
        Triangle();
        Triangle(double base, double height):base(base),height(height){};
        ~Triangle();
        double getbase()const{
            return base;
        };
        double getheight()const{
            return height;
        };
    };
}

class Area {
    public:
    static double calcTriangleArea(const shapes::Triangle& triangle){
        return 0.5 * triangle.getbase() * triangle.getheight();
    
    }
};
