#include <iostream>
#include <conio.h>
using namespace std;
int mul(int a=3, int b=4, int c = 5)
{
    return (a * b * c);
}
int main()
{
    int a = 10;
    int b = 10;

    cout << mul(a, b);
    
    getch();
}


