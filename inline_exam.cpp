#include<iostream>
#include<conio.h>
using namespace std;

inline int sum(int a , int b){
    if (a>b) {

        cout << "A is max";
    }
    else {
        cout << "B is max";
    }
}

int main(){
    int a,b;
    cout << "Enter value of a"<< endl;
    cin >>a;

    cout << "Enter value of b"<< endl;
    cin >>b;   

    sum(a,b);

    getch();
}
