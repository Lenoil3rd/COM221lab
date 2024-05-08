#include <iostream>
#include <random>

using namespace std;

int main () {
    random_device rd ;

    mt19937 gen(rd());

    uniform_int_distribution <> dis (0, 11);

    int daysUntilExpiration  = dis(gen);

<<<<<<< HEAD
    if (daysUntilExpiration <= 5 && daysUntilExpiration !=0 && daysUntilExpiration != 1){
=======
    if (daysUntilExpiration <= 5 && daysUntilExpiration !=0 && daysUntilExpiration != 1 ){
>>>>>>> refs/remotes/origin/main
        cout << "Your subsctription expires in " << daysUntilExpiration << " days " << " Renew now and save 10% ! ";

    }else if (daysUntilExpiration == 1 ){
        cout << "your subscription expires within a day! \n Renew now and save 20%!";

    } else if (daysUntilExpiration > 10){
        cout << "You have an active subscription";
    }else if ( daysUntilExpiration <= 10 && daysUntilExpiration > 5 ){
        cout << " Your subscription will expire soon. Renew now! ";
    }else{
        cout << " your subscription has expired!";
    }
 
 return 0;
}
