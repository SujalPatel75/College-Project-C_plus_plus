#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    int roll;
    int marks;

public:
    student(int m, int n)
    {
        roll = m;
        marks = n;
    }

    student(student &t);

    void showdata()
    {
        cout << "Roll no: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

student::student(student &t)
{
    roll = t.roll;
    marks = t.marks;
}

int main()
{
    cout << "Parameterized constructor output:\n";
    student r(60, 130);
    r.showdata();

    cout << "\nCopy constructor output:\n";
    student stu(r);
    stu.showdata();

    getch();
}
