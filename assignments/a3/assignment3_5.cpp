#include <iostream>

using namespace std ;

int main(){

    int t ;
    int hours ;
    int minutes ;
    int seconds ;

    cout << "Enter time in seconds: " ;
    cin >> t ;

    hours = t / 3600 ;
    minutes = (t % 3600) / 60 ;
    seconds = t - (minutes * 60) - (hours * 3600) ;
    

    cout << "Time is " << hours << " hours, " << minutes << " minutes, and  " << seconds << " seconds. \n" ;


return 0 ;

}
