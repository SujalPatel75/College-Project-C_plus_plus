#include <iostream>
#include <conio.h>
using namespace std;
int sum(int a, int b);
int main()
{
    int a, b;

    cout << "Enter Value Of a " << endl;
    cin >> a;

    cout << "Enter Value Of b " << endl;
    cin >> b;

    sum(a, b);
}

int sum(int a, int b)
{
    int c;
    c = a + b;

    cout << "Addition of a and b = " << c << endl;

    getch();
}
