#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a=10;
    char xyz='S';
    float b=69.69;
    double c;
    string d="Die!!";
    bool e=false;



    cout << "Size of integer= " << sizeof(a) << endl;
    cout << "Value of integer= " << a << endl;
    cout << "Size of character= " << sizeof(xyz) << endl;
    cout << "Value of character= " << xyz << endl;
    cout << "Size of float= " << sizeof(b) << endl;
    cout << "Value of float= " << b << endl;
    cout << "Size of double= " << sizeof(c) << endl;
    cout << "Value of string= " << d << endl;
    cout << "Value of boolean= " << e << endl;

    getch();
}