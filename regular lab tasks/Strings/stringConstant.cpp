#include <iostream>

using namespace std;
/* This string is actually a one dimensional array of characters which is terminated by a null character '\0'
 Thus a null-terminated string contains the character that comprise the string followed by a null.*/


int main () {

/* The following declaration and initialization crates a string consisting of the word "hello". To hold
the null character at the end of the array, the size of the character array containing the string is one more 
than the number of characters in the word "hello"*/
char greeting [6] = {'H', 'e', 'l', 'l', 'o', '\0'};

/*Following the rule of array initialization, then we can write the above statement as: 

char greeting [] = "hello"; */

cout << "Greeting message: ";

cout << greeting << endl;

return 0;
}

