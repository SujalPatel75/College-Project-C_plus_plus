#include <iostream>
#include <conio.h>
using namespace std;
int mul(int a, int b, int c = 2)
{
    return (a * b * c);
}
int main()
{
    int a = 5;
    int b = 4;

    cout << mul(a, b);
    getch();
}


