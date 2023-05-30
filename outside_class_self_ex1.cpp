#include <iostream>
#include <conio.h>
using namespace std;
class car
{
private:
    int car_number;
    char car_model[10];

public:
    void get_data();
    void show_data();
};

void car::get_data()
{
    cout << "Enter car number: ";
    cin >> car_number;

    cout << "Enter car model: ";
    cin >> car_model;
}
void car::show_data()
{
    cout << "---------------------------" << endl;

    cout << "Car number is " << car_number << endl;

    cout << "Car model is " << car_model << endl;
}

int main()
{
    car c1;
    c1.get_data();
    c1.show_data();

    getch();
}
