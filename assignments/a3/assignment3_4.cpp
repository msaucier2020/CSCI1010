#include <iostream>

using namespace std ;
int main(){

    double x ;
    double v ;
    double t ;
    double total ;

    cout << "Enter value for x: " ;
    cin >> x ;

    cout << "Enter value for v: " ;
    cin >> v ;

    cout << "Enter value for t: " ;
    cin >> t ;

    total = x + (v * t) - ((9.80665 * t * t) / 2) ;

    cout << "Total is: " << total << "\n" ;

return 0 ;

}