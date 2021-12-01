// calculate 1 + 3! + 5! + ... + n!

#include<iostream>
using namespace std ;
int main(){
    // index variables (control values)
    int i = 1 ;
    int a = 1 ;
    // variable for user to enter
    int n ;
    // sum and product
    int sum = 0 ;
    int produ = 1 ;

    cout << "Enter an integer: " ;
    cin >> n ;

    while (i <= n){

        // factorial
        while (a <= i){

            produ *= a ;
            a++ ;
        }

        sum += produ ;
        // update control
        i += 2 ;
    }

return 0 ;
}