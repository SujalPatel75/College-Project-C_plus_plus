#include <iostream>
#include <conio.h>
using namespace std;
class sum
{
private:
    int a, b;

public:
    void get_number(void);
    friend int add(void);
};
void sum ::get_number(void)
{
    cout << "Enter any two number :" << endl;
    cin >> a >> b;
}
int add(void)
{
    sum s;
    int temp;
    s.get_number();
    temp = s.a + s.b;
    return temp;
}
int main()
{
    int result;
    result = add();
    cout << "sum=" << result << endl;
    getch();
}