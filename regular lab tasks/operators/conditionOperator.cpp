#include <iostream> 
using namespace std;

/* the "?" operator is called a temary operator because it requires three operands and can be used to replace
if-else statements.
FOR EXAMPLE,

if (y < 10){
    var = 30;
    }else{
        var = 40;
} 
can be written as, 
var = (y < 10) ? 30:40;*/

/*In the example bove, x is assigned the value of 30 if y is less than 10 and 40 if it is not.*/

int main () { 
    // Local variable declaration: 
    int x, y = 10;
    
    x = (y < 10) ? 30 : 40;
    cout << "value of x: " << x << endl;

    return 0;

}