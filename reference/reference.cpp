//reference variable concept
#include <iostream>
using namespace std;

int main(){
    float num = 10;
    float &ref = num;
    cout << "num is " << num << endl;
    cout << "ref is " << ref << endl;
    ref = 20;
    cout << "num is " << num << endl;
    cout << "ref is " << ref << endl;
    return 0;
}