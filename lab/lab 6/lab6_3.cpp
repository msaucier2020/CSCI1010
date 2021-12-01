#include <iostream>
#include <math.h>

using namespace std ;

int main(){

    double x ;
    double y ;
    double distance ;

    cout << "Enter x for point (x,y) " ;
    cin >> x ;
    cout << "Enter y for point (x,y) " ;
    cin >> y ;


    distance = sqrt((pow(x, 2)) + (pow(y, 2))) ;

    cout << "The distance from the given point to the origin is: " << distance << "\n" ;

    return 0 ;


}