#include<iostream>
#include<conio.h>
using namespace std;
class tech_companies{
public:
    string asus,acer,dell;
};
int main()
{
tech_companies owner;
owner.asus = "Sujal Patel";
owner.acer = "Shyam Patel";

cout << owner.acer <<endl;
cout << owner.asus <<endl;

getch();

}