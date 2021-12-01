// store 15 grades, find highest

#include <iostream>
using namespace std ;
int main()
{
    int grade[15] ;
    int highest ;

    for (int i = 0; i < 15; i++)
    {
        cin >> grade[i] ;
        if (i == 0)
        {
            highest = grade[i] ;
        }
        else
        {
            if (grade[i] > highest)
            {
                highest = grade[i] ;
            }
        }
    }

    cout << "highest grade is " << highest << endl ;

return 0 ;
}