#include <iostream>
#include <conio.h>
using namespace std;

inline void display()
{
    cout << "Inline function example" << endl;
}
inline double show(){
    cout << "Inline function using different data type" << endl;
}
int main()
{

    display();
    show();

    getch();
}



