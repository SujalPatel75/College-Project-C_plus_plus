#include<iostream>
#include<conio.h>
using namespace std;

enum Tech_company{Asus,Hp,Dell,Acer,Apple};

int main()
{

 Tech_company name;

 cout << "Major Tech Companies in India List"<<endl;
  cout << "Asus(1)" << endl;
  cout << "Hp(2)" << endl;
  cout << "Dell(3)" << endl;
  cout << "Acer(4)" << endl;
  cout << "Apple(5)" << endl;

  

 cout << "Enter compay's number from the list above: " << endl;
 cin >> name >>; 

 cout << "Ranking of the company is " << name << endl;



getch();

}