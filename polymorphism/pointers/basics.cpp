// simple pointer example
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "p + 1 = " << p + 1 << endl;
    cout << "*(p + 1) = " << *(p + 1) << endl;
    cout << "p - 1 = " << p - 1 << endl;
    cout << "*(p - 1) = " << *(p - 1) << endl;
    return 0;
}