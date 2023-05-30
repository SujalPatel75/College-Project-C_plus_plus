#include<iostream>
#include<conio.h>
using namespace std;


class student {
    public:
    string name;
    int enroll;
    void  printname();
    void printid();
    


};

void student::printname(){

 
    cout << "Your name is" << name << endl;

    cout << "your Enrollment is" << enroll << endl;
}
int  main ()
{
    student ob;
    ob.name = "Sujal"
    ob.enroll=157;
    ob.printname();
    cout << endl;
    ob.printid();

getch();

}