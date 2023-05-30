#include<iostream>
#include<conio.h>
using namespace std;


class sample {
    public:
    void show();
};

void sample::show()
{
    cout << "method define outside class" << endl;
}
int  main ()
{
    sample ob;
    ob.show();

getch();

}