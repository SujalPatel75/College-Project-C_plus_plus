#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int x=10,y=20,z=5;

int sum=x+y;
int mul=x*y;
int sub=x-y;
int mod=x%y;
int div=x/y;

int sum1=x+y+z, mul1=x*y*z, sub1=x-y-z,mod1= x%y%z, div1=x/y/z;



cout <<"Addition of " << x << " + " << y << " = " << sum << endl;
cout <<"Multiplication of " << x << " * " << y << " = " << mul << endl;
cout <<"Subtraction " << x << " - " << y << " = " << sub << endl;
cout <<"Modulo " << x << " % " << y << " = " << mod << endl;
cout <<"Division " << x << " / " << y << " = " << div << endl;
cout << endl;


cout <<"Addition of " << x << " + " << y << " + "<< z << " = "<< sum1 << endl;
cout <<"Multiplication of " << x << " * " << y << " = " << mul1 << endl;
cout <<"Subtraction " << x << " - " << y << " = " << sub1 << endl;
cout <<"Modulo " << x << " % " << y << " = " << mod1 << endl;
cout <<"Division " << x << " / " << y << " = " << div1 << endl;


getch();

}

