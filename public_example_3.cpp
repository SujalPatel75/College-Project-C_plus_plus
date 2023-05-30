#include<iostream>
#include<conio.h>
using namespace std;
class sample{
    public:
    int age;
    void display() {
        cout << "Age=  " << age << endl;
        getch();
    }
};
int main()

{
 sample obj;
 cout <<  "Enter yout age";
 cin>> obj.age;
 obj.display();
 return 0;


getch();

}