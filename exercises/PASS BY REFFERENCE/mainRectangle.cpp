#include "Rectangle.h" // includes the header file
#include <iostream>

using namespace std;

int main(){
    Rectangle rectangle;// rectangle object creation

 cout << "Enter length: ";
 double length;
 cin >> length;

// preventing non-positive values 
 if(length <= 0 ){
    cerr << "Error: Length must be positive." << endl;
    return 1;
 }
 
 rectangle.assignLength(length); // assigning the length to the rectangle object

// get user input for width
 cout << "Enter width: ";
 double width;
 cin >> width;
 if (width <= 0){
    cerr<< "Error: width must be positive. " << endl;// display error if width is negative
    return 1;
 }
 rectangle.assignWidth(width);// assigning width to the rectangle object


 double calcArea = rectangle.area();// using the rectange's member function to calculate the area

 cout << "Area: " << calcArea << endl; //display the area

 return 0;
}