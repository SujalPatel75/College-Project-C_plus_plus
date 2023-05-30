#include <iostream>
#include <conio.h>
using namespace std;
int mul(int a = 3, int b = 4, int c = 2)
{
    int multiplication;

    multiplication = (a * b * c);

    cout << multiplication;
    getch();
}
int main()
{

    mul();
}
