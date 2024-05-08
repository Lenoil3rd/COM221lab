#include <iostream>
#include <string> 
#include <vector>

using namespace std;

int main (){
    vector <string> alphaNumeric = {"B123" , "C234" , "A345" , "C15" , "B177" , "G3003" , "C235" , "B179" };
    
    string B_containingAlphaNumerics;

    cout << "The following is a list of all B containing Alpha Numeric values : ";
    
    for (int i = 0; i < 8 ; i++){
        if (alphaNumeric[i].find('B') != string::npos){
            B_containingAlphaNumerics += alphaNumeric[i] + " ";
        }
    } 
    cout << B_containingAlphaNumerics ;
    
return 0;
}


