#include <iostream>
#include <random>

using namespace std;

int main () {
    random_device rd ;

    mt19937 gen(rd());

    uniform_int_distribution <> dis (0, 11);

    int daysUntilExpiration  = dis(gen);

    switch (daysUntilExpiration){
        case 11:
            cout << "You have an active subscription" << endl;
            break;
        case 1:
             cout << "Your subscription expires within a day!\n Renew now and save 20% !" << endl;
             break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription will expire in " << daysUntilExpiration << " days " << "Renew now and save 10% !" << endl ;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
             cout << "Your subscription will expire soon. Renew now! " << endl;  
             break;
        default:
            cout << "Your subscription has expired!" << endl;
            break;     

    }
    return 0;
}