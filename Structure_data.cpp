#include <iostream>
#include <conio.h>
using namespace std;

struct student
{
    long long int enrollmentNumber ;
    int sem;
    char name[100], branch[100];
} s1;

int main()
{
    cout << "---------------------------------------------------------------\n"
         << endl;
    cout << "                Enter   Student Record\n"
         << endl;
    cout << "---------------------------------------------------------------\n"
         << endl;
    cout << "Enter Student name : " << endl;
    cin >> s1.name;
    cout  << std::flush;
    
    cout << "Enter Student branch : " << endl;
    cin >> s1.branch;
    cout  << std::flush;
  

    cout << "student semester : " << endl;
    cin >>  s1.sem;
    cout  << std::flush;
    

    cout << "Student Enrollment no. : " << endl;
    cin >> s1.enrollmentNumber;
    cout  << std::flush;
   

    cout << "---------------------------------------------------------------\n"
         << endl;
    cout << "                  Student Record\n"
         << endl;
    cout << "---------------------------------------------------------------\n"
         <<endl ;
    cout << "Student name: \n" << s1.name << endl;;
    cout << "Student branch: \n"<< s1.branch << endl;
    cout << "student semester : \n" << s1.sem << endl;
    cout << "Student Enrollment no. : \n"<< s1.enrollmentNumber << endl;
    getch();
}