#include <iostream>
#include <conio.h>
using namespace std;
class complex
{

private:
    int r, i;

public:
    void read();
    void print();
};
inline void complex :: read(){
    cout << "Enter real & imaginary value "<< endl;
    cin >>r >> i; 
}
inline void complex :: print(){
    cout << "Real value= " << r << endl;
    cout << "Imaginary value= " << i << endl;

}
int main()
{
    complex ob;
    ob.read();
    ob.print();

    getch();
}
