#include <iostream>
#include <conio.h>
using namespace std;
class sum
{
private:
int a,b;
public:
void get_number(void);
friend int add (void);
};
int add (void)
{
sum s;
int temp;
s.a=10;
s.b=20;
temp=s.a+s.b;
return temp;
}
int main()
{
int result;
result = add();
cout<<"sum ="<<result<<endl;
getch();
}