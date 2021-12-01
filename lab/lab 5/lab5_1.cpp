#include <iostream>

using namespace std ;
int main() {

    double radius ;
    double height ;
    double volume ;

    cout << "Please enter cylinder radius: " ;
    cin >> radius ;

    cout << "Please enter cylinder height: " ;
    cin >> height ;

    volume = 3.14 * radius * radius * height ;

    cout << "The volume of the cylinder is: " << volume << "\n" ;


    return 0;
    
}