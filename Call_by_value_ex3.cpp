#include <iostream>
#include <conio.h>
using namespace std;
int swap(int x, int y);
int main()
{

    int a = 10;
    int b = 20;
    swap(a, b);
    getch();
}
int swap(int x, int y)
{

    cout << " Value of X= " << x << " Value of Y= " << y << endl;
    
    int temp;
    temp = x;
    x = y;
    y = temp;

    cout << " Value of X= " << x << " Value of Y= " << y << endl;
}