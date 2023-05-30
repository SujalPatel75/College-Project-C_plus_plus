#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    int rollno;
    string name;

public:
    student(int r, string n)
    {
        rollno = r;
        name = n;
    }
    void display(){
        cout << "roll no " << rollno <<endl;
        cout <<"name " << name <<endl;
    }
};

int main()
{
    student s(143, "Sujal Patel");
    s.display();
    getch();
}
