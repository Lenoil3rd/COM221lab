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
