#include <iostream>

using namespace std;

/*A cast is a special operator that forces one type to be converted into another. As an operator,
a cast is a unary operator. */

/*The most general cast supported by most of the C++ compilers is as follows:

(type)expression

WHERE, type is the desired data type.*/
main() {

double a = 21.09399;

float b = 10.20;

int c;

c = (int) a;

cout << "Line 1 Value of (int)a is :" << c << endl;

c = (int) b;

cout << "Line 2 Value of (int)b is :" << c << endl;

return 0;

}