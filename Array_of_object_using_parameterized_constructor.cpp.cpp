#include <iostream>
#include <conio.h>
using namespace std;

class test
{

    int x, y;

public:
    test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void display()
    {
        cout << "x: " << x << " y: " << y << endl;
    }
};

int main()
{
    test t[3] = {test(2, 3), test(4, 5), test(6, 7)};

    for (int i = 0; i < 3; i++)
    {
        t[i].display();
    }
    getch();
}