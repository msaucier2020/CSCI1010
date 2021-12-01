#include<iostream>
#include<math.h>

using namespace std;

int main(){

    double t ;
    double v ;
    double w ;

    cout << "Enter temperature in Farenheit: " ;
    cin >> t ;

    cout << "Enter wind speed in miles per hour: " ;
    cin >> v ;

    w = 35.74 + (0.6215 * t) + (0.4275 * t - 35.75) * pow(v, 0.16) ;

    cout << "The effective temperature is: " << w << "\n" ;

    return 0 ;
    
}