#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    float x;

    cout << "Enter a number" << endl;
    cin >> x;

    if (x == 0)
    {
        cout << "Your Number Is Zero" << endl;
    }

    if (x > 0)
    {
        cout << "Your Number Is Positive" << endl;
    }

    if (x < 0)
    {
        cout << "Your Number Is Negative" << endl;
    }

    getch();
}