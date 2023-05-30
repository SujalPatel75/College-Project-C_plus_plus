#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a, b;

    cout << "Enter Value of 1st Digit" << endl;
    cin >> a;

    cout << "\n";

    cout << "Enter Value of 2nd Digit" << endl;
    cin >> b;

    if (a > b)
    {
        cout << "1st digit is Greater" << endl;
    }

    else
    {
        cout << "2nd digit is Greater" << endl;
    }

    getch();
}
