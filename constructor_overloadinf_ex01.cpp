#include <iostream>
#include <conio.h>
using namespace std;

class student
{
private:
    int roll;
    int mark;

public:
    student();
    student(int);
    student(int, int);
    void show(void);
};

void student::show()
{
    cout << "Roll Number: " << roll << endl;
    cout << "Mark: " << mark << endl;
}

student::student()
{
    roll = 24;
    mark = 12;
}

student::student(int roll, int mark)
{
    this->roll = roll;
    this->mark = mark;
}

student::student(int a)
{
    roll = mark = a;
}

int main()
{
    student stu;
    student stu1(6);
    student stu2(3, 5);

    stu.show();

    cout << "\nOne argument:\n";
    stu1.show();

    cout << "\nTwo arguments:\n";
    stu2.show();

    getch();
    return 0;
}
