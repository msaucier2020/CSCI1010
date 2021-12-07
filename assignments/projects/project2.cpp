// Madeleine Saucier
// CSCI 1010 Section 001
// Project 2
// Student Information Management System

#include <iostream>
#include <string>

using namespace std ;

// variables
char opt;
int used = 0;
int id;
const int MAX = 100;
string name[MAX];
int grade[MAX];

// functions
void menu();
bool check_cap(int check);
void add_stu();
bool check_exist(int check);
int highest();
int lowest();
int mean();
void remove_stu(int id);

int main ()
{
    while (true)
    {
        menu();
        cin >> opt; 

        //add student
        if(opt == '1')
        {
            if(check_cap(used))
            {
                add_stu();  
            }
            else
            {
                cout << "Error. System already full." ;
            }
        }

        //search student
        else if(opt == '2')
        {
            int search;
            cout << "Enter Student ID: ";
            cin >> search;

            if(check_exist(search))
            {
                cout << "ID: " << search << endl;
                cout << "Name: " << name[search - 1] << endl;
                cout << "Grade: " << grade[search - 1] << endl;
            }
            else
            {
                cout << "Error. Student does not exist.\n";
            }
        }

        //show grade stats
        else if(opt == '3')
        {
            int h = highest();
            int l = lowest();
            int m = mean();

            cout << "Highest Grade: " << h << endl;
            cout << "Lowest Grade: " << l << endl;
            cout << "Mean Grade: " << m << endl;
        }


        //remove student
        else if(opt == '4')
        {
            int removeID;
            cout << "Enter Student ID: ";
            cin >> removeID;

            //save name of student being removed
            string old_name = name[removeID - 1];

            if(check_exist(removeID))
            {
                remove_stu(removeID);
                cout << "Student " << old_name << " has been removed from the system.\n";
            }
            else
            {
                cout << "Student does not exist. Please try again. \n";
            }

        }

        //print all students and grades
        else if(opt == '5')
        {
            cout << "ID \t NAME \t GRADE \n";
            
            for(int i = 0; i < used; i++)
            {
                cout << i+1 << "\t" << name[i] << "\t" << grade[i] << "\n";
            }
        }

        //exit the system
        else if(opt == '6')
        {
            cout << "System Closed. Thank You!\n";
            break;
        }
    }
return 0 ;
}

//check capacity for adding new students
bool check_cap(int check)
{
    if(used < MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//display menu
void menu()
{
    cout << "*** CSCI 1010 Student Information Management System ***\n";
    cout << "1. Add Student \n";
    cout << "2. Search by ID \n";
    cout << "3. Grade Statistics\n";
    cout << "4. Remove Student\n";
    cout << "5. Print All Students\n";
    cout << "6. Exit System\n";

}

//adding new students
void add_stu()
{
    //update used and define id
    used++;
    id = used;

    cout << "Student ID is: " << id << endl;

    //input name and grade. note: address in array is 1 less than ID bc it starts at 0
    cout << "Enter student name: ";
    cin >> name[id-1];

    cout << "Enter student grade: ";
    cin >> grade[id-1];
}

//check if student exists by searching id
bool check_exist(int check)
{
    if(check <= used)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//find highest grade
int highest()
{
    int high = 0;

    for(int h = 0; h < used; h++)
    {
        if(grade[h] > high)
        {
            high = grade[h];
        }
    }
return high;
}

//find lowest grade
int lowest()
{
    int low;

    for(int l = 0; l < used; l++)
    {
        
        if(grade[l] < low)
        {
            low = grade[l];
        }
    }
return low;
}

//find mean
int mean()
{
    int m = 0;

    for(int i = 0; i < used; i++)
    {
        m = m + grade[i];
    }
    m = m/used;

return m;
}

//delete student
void remove_stu(int id)
{
    //remove student and move others down the array
    for(int i = id; i < used; i++)
    {
        name[i-1] = name[i];
        grade[i-1] = grade[i];
    }

    //update used
    used--;
}