#include <iostream>
#include <conio.h>
using namespace std;

class test
{
    public :
      void  test1(){
            cout << "Hi there!" << endl;
}
};

int main()
{
    test ob;
    ob.test1();
    getch();
}
