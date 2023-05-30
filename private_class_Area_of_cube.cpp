#include <iostream>
#include <conio.h>
using namespace std;
class box
{
private:
    int l, b, h;
    int area;
    void getdata()
    {
        cout << " Enter L, b, h= " << endl;
        cin >> l >> b >> h;
        area = l * b * h;
    }

public:
    void show()
    {
        getdata();
        cout << endl;
        cout << "***************************" << endl;
        cout << "Details Of Box " << endl;
        cout << "***************************" << endl;
        cout << endl;
        cout << "Length of box= " << l << endl;
        cout << "Breadth of box= " << b << endl;
        cout << "Height of box= " << h << endl;
        cout << "Area of box= " << area << endl;
    }
};
int main()
{
    box b1;
    b1.show();
    getch();
}