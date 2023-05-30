#include <iostream>
#include <conio.h>
using namespace std;

class college
{
public:
    int student_id;
    string student_name;
    string department_name;
    int sem;

    void student_data_input()
    {

        cout << "Enter student name" << endl;
        cin >> student_name;

        cout << "Enter student id" << endl;
        cin >> student_id;

        cout << "Enter department name" << endl;
        cin >> department_name;

        cout << "Enter sem" << endl;
        cin >> sem;

        cout << endl;
        cout << endl;
    }

    void student_data_output()
    {

        cout << "*********************************" << endl;

        cout << "STUDENT DATA RECORD" << endl;

        cout << "*********************************" << endl;

        cout << "Name of student is " << student_name << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl;

        cout << "ID of student is " << student_id << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl;

        cout << "Semester of student is " << sem << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl;

        cout << "Department of student is " << department_name << endl;
        cout << "--------------------------------------------" << endl;
        cout << endl;

        cout << endl;
        cout << endl;
    }
};
int main()
{
    for (int i = 0; i < 2; i++)
    {
        college ob;

        ob.student_data_input();

        ob.student_data_output();
    }

    getch();
}