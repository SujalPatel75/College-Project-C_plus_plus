#include<iostream>
#include<conio.h>
using namespace std;
class sample{
    private:
    int age;
    public:
    void display(int b) {
        age = b;
        cout << "Age=  " << age << endl;
        getch();
    }
};
int main()

{
 sample obj;
 int abc;
 cout <<  "Enter your age ";
 cin>> abc;
 obj.display(abc);
 return 0;


getch();

}