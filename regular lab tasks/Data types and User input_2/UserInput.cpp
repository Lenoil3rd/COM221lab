#include <iostream>
using namespace std; 
int main() { 
 int x; 
 int y;
 int sum;
 cout << "Type a number: "; // Type a number and press enter 
 cin >> x; // Get user input from the keyboard 
 cout<< "\n \n" << "Your number is: " << x << "\n \n"; 
 cout << "Type another number: ";
 cin >> y;
 cout << "\n \n"<< "your other number is: " << y << "\n \n";
 sum = x + y;
 cout << "Sum is: " << sum;
 return 0; 
} 
 