#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    int a;

public:
    demo()
    {
        a = 10;
    }

    demo(const demo &z)
    {
        a = z.a;
    }

    void put()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    demo a;
    a.put();

    demo b(a);
    b.put();

    getch();
    return 0;
}
