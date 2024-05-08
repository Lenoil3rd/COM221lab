#include <iostream>
using namespace std;

// Area of a square 
double Square(double side ){
    return side * side;
}

//Area of a triangle
double Triangle(double base, double height){
    return 0.5 * base * height;
}

//Area of a Rectangle
double Rectangle(double length , double width ){
    return length * width;
}

int main(){
   int shapeofChoice;

   double base, height, length, width, side;

   while (true){
    cout << "Please select the area of the shape you wanna calculate ";
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit program" << endl;
    cin >> shapeofChoice;

    switch(shapeofChoice){
        case 1:
        cout << " Enter the side of the square: ";
        cin >> side;
        cout << "The area of the square is: " << Square(side) << endl;
        break;
        
        case 2:
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        cout << "The area of the rectangle is: " << Rectangle(length , width) << endl;
        break; 
        
        case 3:
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "The area of the triangle is: " << Triangle(base, height) << endl;
        break;

        case 4:
        cout << "Quit the program." << endl;
        return 0;
        
        default:
        cout << "Invalid input. Please try again." << endl;

    }
   }
return 0;
}