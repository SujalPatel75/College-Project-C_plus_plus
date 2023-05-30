
#include <iostream>
using namespace std;
class student {
public:
  int rollno;
  string name;

  void show() { cout << "your name= " << name << endl; }
};

int main() {

  student ob;
  ob.rollno = 50;
  ob.name = "sujal";
  ob.show();
  return 0;
}