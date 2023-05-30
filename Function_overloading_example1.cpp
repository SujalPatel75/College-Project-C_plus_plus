#include <iostream>

using namespace std;
int sum(int a, int b)
{
    return a + b;
}

float sum(float x, float y)
{
    return x+y;
}
int main()
{
int result1=sum(10, 20);
float result2=sum(10.34f, 20.56f);

cout << result2 <<endl;
}
