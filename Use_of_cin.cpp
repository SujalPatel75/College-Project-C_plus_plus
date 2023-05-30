#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int age;
    char name[100];
    int sem;
    char dep[100];

    cout << "Enter your Age ";
    cin >> age;

    cout << "Enter your Name ";
    cin >> name;

    cout << "Enter your Sem ";
    cin >> sem;

    cout << "Enter your Department ";
    cin >> dep;

    cout << "\n";
    

    cout << "Your name is " << name << endl;

    cout << "You are  " << age << " years old" << endl;

    cout << "You are in  " << sem << " sem" << endl;

    cout << "You are in  " << dep << " department" << endl;

    getch();
}