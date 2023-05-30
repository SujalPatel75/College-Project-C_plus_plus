#include <iostream>
#include <conio.h>
using namespace std;
int add(int &x, int &y);
int main()
{

    int a = 10;
    int b = 20;
    cout << a << " " << b << endl;
    add(a, b);

    getch();
}
int add(int &a, int &b)
{

    int add;
    a++;
    b++;
    add = a + b;

    cout << add << endl;
}
