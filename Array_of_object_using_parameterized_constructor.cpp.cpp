#include <iostream>
#include <conio.h>
using namespace std;

class one
{

    int x, y;

public:
    one(int x, int y)
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
    one o[3] = {one(2, 3), one(4, 5), one(6, 7)};

    for (int i = 0; i < 3; i++)
    {
        o[i].display();
    }
    getch();
}