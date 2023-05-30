#include <iostream>
#include <conio.h>
using namespace std;

int num( int x = 2)
{
     x++;
   // To use this remove the keyword "const"
    return x;
}
int main()
{

    cout << num();

    getch();
}