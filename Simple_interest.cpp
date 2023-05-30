#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    float a, b, c, x;

    cout << "Enter Your Value Of Principal Amount " << endl;
    cin >> a;

    cout << "Enter Your Value Of Time Period " << endl;
    cin >> b;

    cout << "Enter Your Value Of Rate Of Interest" << endl;
    cin >> c;

    x = (a * b * c) / 100;

    cout << "Your Interest Value is " << x << endl;

    getch();
}