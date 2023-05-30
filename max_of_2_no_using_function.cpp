#include <iostream>
#include <conio.h>
using namespace std;
int mul(int a, int b)
{
    int mul;
    if (a > b) // for minumum // (a < b)
    {
        cout << "--------------------------------" << endl;
        cout << "1st is max" << endl;
    }
    else
    {
        cout << "--------------------------------" << endl;
        cout << "2nd is max" << endl;
    }
}
int main()
{
    int a, b;
    cout << "Enter 1st Number" << endl;
    cin >> a;

    cout << "Enter 2nd Number" << endl;
    cin >> b;

    mul(a, b);
    getch();
}