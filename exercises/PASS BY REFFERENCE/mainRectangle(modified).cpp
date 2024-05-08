#include "Rectangle.h" // includes the header file
#include <iostream>

using namespace std;

int main(){
    Rectangle rectangle, rectangle2;// rectangle object creation

 cout << "Enter length of the first rectangle: ";
 double length;
 cin >> length;
 rectangle.assignLength(length); // assigning the length to the rectangle object

// get user input for width
 cout << "Enter width of the first rectangle: ";
 double width;
 cin >> width;
 // assigning width to the rectangle object
 rectangle.assignWidth(width);

 double calcArea = rectangle.area();// using the rectange's member function to calculate the area

cout << "\n Enter the length of the second rectangle: ";
cin >> length;

cout << "Enter the width of the second rectangle: ";
cin >> width;
double calcArea2 = rectangle2.area();


 cout << "Area of first rectangle: " << calcArea << endl; //display the area
 cout << "Area of second rectangle: "<< calcArea2 << endl;
 
 return 0;
}