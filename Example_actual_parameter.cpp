#include <iostream>
#include <conio.h>
using namespace std;
int mul(int a=10, int b=4 , int c=3)
{
    int d;

    d = (a * b * c);

    cout <<"\n Ans= " << d;
   
}
int main()
{

    mul(10,5);
    mul();
    mul(4);

    getch();
}
