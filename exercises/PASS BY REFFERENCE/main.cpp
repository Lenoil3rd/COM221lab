#include <iostream>
#include "SquareClass.h"
#include "TriangleClass.h"
#include "CircleClass.h"
#include "Area.h"
using namespace std;



                     
int main() {
    int choice;
    bool validChoice = false;

    while (true) {
        cout << "Choose an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cin >> choice;

        if (choice == 1) {
            validChoice = true;
            shapes::Square square;
            std::cout << "Enter the side length of the square: ";
            double sideLength;
            std::cin >> sideLength;
            square.setSideLength(sideLength);
            double area = Area::calcSquareArea(square);
            std::cout << "The area of the square is: " << area << std::endl;
        } else if (choice == 2) {
            validChoice = true;
            shapes::Triangle triangle;
            std::cout << "Enter the base of the triangle: ";
            double base;
            std::cin >> base;
            triangle.setbase(base);
            std::cout << "Enter the height of the triangle: ";
            double height;
            std::cin >> height;
            triangle.setheight(height);
            double area = Area::calcTriangleArea(triangle);
            std::cout << "The area of the triangle is: " << area << std::endl;
        } else if (choice == 3) {
            validChoice = true;
            shapes::Circle circle;
            std::cout << "Enter the radius of the circle: ";
            double radius;
            std::cin >> radius;
            circle.setRadius(radius);
            double area = Area::calcCircleArea(circle);
            std::cout << "The area of the circle is: " << area << std::endl;
        } else if (choice == 4) {
            return 0;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
            validChoice = false;
        }

        if (!validChoice) {
            continue;
        }
    }
}