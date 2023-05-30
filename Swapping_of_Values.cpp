#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    float a, b,c, x;

    cout << "Enter Your Desired Value of A" << endl;
    cin >> a;

    cout << "Enter Your Desired Value of B" << endl;
    cin >> b;

    cout << "Enter Your Desired Value of C" << endl;
    cin >> c;

    x = a;
    a = b;
    b = c;
    c = x;

    cout << "---------------------------------------------" << endl;

    cout << "Swapped Value of A= " << a << endl;
    cout << endl;
    cout << "Swapped Value of B= " << b << endl;
    cout << endl;
     cout << "Swapped Value of c= " << c << endl;

    getch();
}