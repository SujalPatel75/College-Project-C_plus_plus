#include <iostream>
#include <conio.h>
using namespace std;
class circle
{

private:
    float r;

public:
    void getdata()
    {
        cout << "Enter radius of circle= " << endl;
        cin >> r;
    }
    void area()
    {
        float a;
        a = 3.14 * r * r;
        cout << "Area of circle is " << a << endl;
        getch();
    }
};
int main()
{

    circle c1, c2;
    c1.getdata();
    c1.area();
    c2.getdata();
    c1.area();

    return 0;
    
}