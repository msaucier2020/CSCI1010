// enter series of numbers (ended by 0) and add up all of them

#include<iostream>

using namespace std ;

int main(){

    int n ;
    int sum = 0 ;

    cout << "Enter a series of numbers (use 0 to end): " ;

    while(true)
    {

        cin >> n ;

        if(n == 0)
        {
           break ;
        }
        else
        {
            sum += n;
        }
       
    }

    cout << "Sum is " << sum << endl ;

return 0 ;
}