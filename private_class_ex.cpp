#include <iostream>

using namespace std;
class person
{
private:
    int a;

public:
     void display(int b)
    {
        a = b;
        cout << "Value of a " << a << endl;
    }
};
int main()
{
    person ob;
    ob.display(10);

    return 0;
}