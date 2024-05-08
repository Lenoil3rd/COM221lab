#include <iostream>
using namespace std;


void swapNumbers( int& varA, int& varB){
    int alias = varA; //alias is assigned the value of varA, alias becomes 25
    varA = varB;// varA becomes 100
    varB = alias;//varB becomes 25
}
int main(){

    int varA = 25;
    int varB = 100;
cout << "VarA before swap: " << varA << endl;
cout << "varB before swap: " << varB << endl;

swapNumbers(varA , varB);

cout << "varA after swap: " << varA << endl;
cout << "varB after swap: " << varB << endl;

return 0;

}