#include <iostream>
#include <conio.h>
using namespace std;
inline float sphere(float a , float pie, int r ) //a=1.33
{
    return a*pie*r*r*r;
}
int main()
{
    cout << "Volume Of Sphere is: " << sphere(1.33, 3.14, 5 );
    getch();
}
