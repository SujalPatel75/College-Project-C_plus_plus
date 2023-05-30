#include <iostream>
#include <conio.h>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
int main()
{

    int a = 5, b = 6, sum;
    sum = add(a, b);
    cout << sum << endl;


    getch();
}