#include <iostream>
#include <conio.h>
using namespace std;

class add
{
public:
    add(int x, int y, int z)
    {
        int c = x + y + z;
        cout << "sum= " << c << endl;
    }
};
int main()
{

    add ob(10, 20, 30);
    getch();

    getch();
}