#include <iostream>
#include <conio.h>
using namespace std;

int my_fun(int x, int y, int z)
{

    return (5 * x) + (2 * y) + (3 * z);
}
int main()
{

    cout << my_fun(5, 2, 3);

    getch();
}