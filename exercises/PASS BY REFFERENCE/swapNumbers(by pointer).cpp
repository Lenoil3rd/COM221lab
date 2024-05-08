#include <iostream>

using namespace std;

void swapNumbers(int* varA, int*varB){
    int varC = *varA; // the asterik is to derefference the pointer to access the original variable 
    *varA = *varB;
    *varB = varC; 

}

int main(){

    int varA = 25;
    int varB = 100;
cout << "VarA before swap: " << varA << endl;
cout << "varB before swap: " << varB << endl;

// the '&' points at the adress of the arguments, therefore passing the values of the arguments
swapNumbers(&varA , &varB);
cout << "varA after swap: " << varA << endl;
cout << "varB after swap: " << varB << endl;

return 0;

}