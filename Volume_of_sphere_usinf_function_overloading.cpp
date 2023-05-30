#include <iostream>
#include <conio.h>
using namespace std;
int volume(int volume);
double volume(double,  int);
long volume (long,int,int);

int main(){
    cout << volume(10) << endl;
    cout << volume(2.51,8) << endl;
    cout << volume(100L , 75 , 15) << endl;
    return 0;

}

int volume(int s){
    return (s*s*s);
}
double volume(double r , int h)
{
    return (3.1451 *r *r * h);
}
long volume(long L, int b ,int h)
{
    return (L * b * h);
    
}


