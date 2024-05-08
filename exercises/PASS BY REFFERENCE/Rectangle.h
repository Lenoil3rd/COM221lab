#pragma once // tells the compiler to include the header file only once
#define RECTANGLE_CLASS_H // ensures that the class Rectangle is defined only once

class Rectangle{
    private:
    // The member variable declaration.
        double Rect_Length;
        double Rect_Width;

    public:
    //Default constructor initializing the rectangle with a default length and width (in ths case 0.0)
        Rectangle();
    // The Destructor...    
        ~Rectangle();
    // width and length setters.
        void assignLength(double lenght);
        void assignWidth(double width);
    
    /*retuning rectangle length and width with const keyword preventing 
    the functions from modifying member variables. */    
        double getLength()const;
        double getWidth()const;
    
    //Function calculating and returning the area of the rectangle 
        double area()const;

};
