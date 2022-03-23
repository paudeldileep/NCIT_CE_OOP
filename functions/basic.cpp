//simple function implementation in c++
#include <iostream>
using namespace std;

//no return type
void calcSum(int a, int b)
{
    int sum = a + b;
    cout << "Sum of " << a << " and " << b << " is " << sum << endl;
}

//return type
int calcMultiply(int a, int b)
{
    int sum = a * b;
    return sum;
}

//default arguments
void calcSimpleInterest(int p, int r = 3, int t = 2)
{
    int si = (p * r * t) / 100;
    cout << "Simple Interest is " << si << endl;
}

//inline function
inline int calcSquare(int a)
{
    return a * a;
}

int main(){
    calcSum(10, 20);
    int result = calcMultiply(10, 20);
    cout << "Result of 10 * 20 is " << result << endl;

    calcSimpleInterest(1000);
    calcSimpleInterest(1000, 5);
    calcSimpleInterest(1000, 5, 3);

    //inline function
    int a = 10;
    int b = calcSquare(a);
    cout << "Square of " << a << " is " << b << endl;
    return 0;
}