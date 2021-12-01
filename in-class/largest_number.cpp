// enter a series of numbers and find the largest one

#include<iostream>

using namespace std ;

int main(){

    int n ;
    int largest;

    cout << "Enter a series of numbers (end with 0): " ;
    cin >> n ;
    largest = n ;
    
    while(true)
    {
        cin >> n ;

        if (n == 0)
        {
            break ;
        }
        else if (n > largest)
        {
            largest = n ;
        }
    }

    cout << "The largest number is: " << largest << endl ;
    
return 0 ;
}