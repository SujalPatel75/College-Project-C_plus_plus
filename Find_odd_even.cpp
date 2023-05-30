#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a;

    cout << "Enter Value of 1st Digit" << endl;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Your Given Number is EVEN ";
    }
    else
    {
        cout << "Your Given Number is ODD";
    }

    getch();
}