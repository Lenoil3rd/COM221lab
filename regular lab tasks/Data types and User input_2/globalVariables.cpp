#include <iostream>
using namespace std;
 
// Global variable declaration:
int g;
int c = 30;

int main () {
 // Local variable declaration:
 int a, b;
 
 // actual initialization
 a = 10;
 b = 20;
 int c = 15;
 g = a + b;
 
 cout << g << endl;
 cout << c; 
 return 0;
}
