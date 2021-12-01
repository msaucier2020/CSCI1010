#include<iostream>
using namespace std ;

double circleArea (double r);

int main()
{
    double r ;
    cout << "enter radius: " ;
    cin >> r ;
    cout << "area is: " << circleArea(r) << "\n" ;

return 0;
}

double circleArea (double r)
{
    const double PI = 3.14159 ;
    double area ;
    area = PI * r * r ;

    return area ;
}
