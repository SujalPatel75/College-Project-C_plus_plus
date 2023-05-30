#include <iostream>
#include <conio.h>
using namespace std;
void add_num(int a, int b)
{
    cout << "sum = " << a + b << endl;
}
int main()
{

    int i, j;

    cout << "Enter Value Of a " << endl;
    cin >> i;

    cout << "Enter Value Of b " << endl;
    cin >> j;

    add_num(i, j);

    getch();
}