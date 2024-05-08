#include <iostream>
using namespace std;

int main (){

    int userIntegerValue;
    cout << "Enter an integer value between 5 and 10 : ";
    cin >> userIntegerValue;
    
    /* 'userIntegerValue < 5' esures that the loop continues to execute if the input is less than 5
    and the 'userIntegerValue > 10 ensures that the loop continues to execute if the input is more than 10.
    The 'cin.fail()' function ensures that if the user enters a non integer value then the loop continues to 
    execute */
    while (userIntegerValue < 5 || userIntegerValue > 10 || cin.fail()){       
      if (cin.fail()) {
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Sorry, you entered an invalid number, please try again : ";
        cin >> userIntegerValue;
       }else{
            cout << "You have entered " << userIntegerValue << ". Please enter a number between 5 and 10 : ";
            cin >> userIntegerValue;
       }
       
        }
        cout << "Your input value (" << userIntegerValue << ") has been accepted. ";
return 0;
}

