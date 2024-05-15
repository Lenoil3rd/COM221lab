#pragma once

namespace shapes{
    class Triangle{
        private:
        double base;
        double height;
        public:
        Triangle();
        Triangle(double base, double height);
        ~Triangle();
        double getbase()const;
        void setbase(double base);
        double getheight()const;
        void setheight(double height);
                    
    };
};



