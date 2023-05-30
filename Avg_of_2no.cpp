#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

 float a,b,average;
	cout << "Average of two numbers\n";
	cout <<"--------------------------\n";
	cout << "Enter the two numbers: \n";
	cout << "Number 1: ";
	cin >> a; 
	cout << "Number 2: ";
	cin >> b;
	average = (a+b)/2.0;
	cout << "The average is : " << average << endl;

getch();

}