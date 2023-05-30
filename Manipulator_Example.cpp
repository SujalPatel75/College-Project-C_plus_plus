#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{

    int a = 5, b = 23948, d = 69;
    double c = 457.872647;
    string e = "BOOP";

    cout << "This shows the use case of endl" << endl
         << "function in c++ ";
    cout << a << endl;

    cout << "----------------------------------------" << endl;

    cout << "This shows the use case of setw()" << endl;
    cout << setw(8) << b << endl;

    cout << "----------------------------------------" << endl;

    cout << "This shows the use case of set precision(Fixed)" << endl;
    cout << fixed << setprecision(4) << c << endl;

    cout << "----------------------------------------" << endl;

    cout << "This shows the use case of set precision(scientific)" << endl;
    cout << scientific << setprecision(4) << c << endl;

    cout << "----------------------------------------" << endl;

    cout << "This shows the use case of setfill()" << endl;
    cout << setw(6) << setfill('*') << d << endl;

    cout << "----------------------------------------" << endl;

    cout << e << setw(6) << setfill('*') << endl;
    cout << e << endl;

    cout << "----------------------------------------" << endl;

    cout << e << setw(6) << setfill('#') << endl;
    cout << e << endl;

    cout << "----------------------------------------" << endl;

    cout << "This shows the use case of hex" << endl;
    cout << hex << b << endl;

    cout << "----------------------------------------" << endl;

    cout << "This shows the use case of oct" << endl;
    cout << oct << b << endl;

    cout << "----------------------------------------" << endl;

    cout << "This shows the use case of dec" << endl;
    cout << dec << b << endl;

    cout << "----------------------------------------" << endl;

    getch();
}
