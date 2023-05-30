#include <iostream>
#include <conio.h>
using namespace std;

struct rectangle
{
    int width, height;
} rec;
int main()
{

    rec.width = 8;
    rec.height = 5;

    cout << "Area of rectangle: " << rec.width * rec.height << endl;
    getch();
}