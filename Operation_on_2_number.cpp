#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a, b;
    int sum, mul, div, sub, modluo;

    cout << "Enter Value of 1st Digit" << endl;
    cin >> a;

    cout << "Enter Value of 2nd Digit" << endl;
    cin >> b;

    sum = a + b;
    mul = a * b;
    div = a / b;
    sub = a - b;
    modluo = a % b;

    cout << "Sum: " << sum << endl;
    cout << "Div: " << div << endl;
    cout << "Sub: " << sub << endl;
    cout << "Modluo: " << modluo << endl;
    getch();
}