#include <iostream>
#include <conio.h>
using namespace std;
class sample
{
private:
    int a, b;

public:
    void setvalue()
    {
        a = 40;
        b = 60;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a + s.b) / 2.0;
}
int main()
{
    sample x;
    int result;
    x.setvalue();
    cout << "sum is =" << mean(x) << endl;
    getch();
}