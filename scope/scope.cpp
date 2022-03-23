//example program to demonstarate use of :: operator

#include <iostream>
using namespace std;

int num=10;
int main(){ 
    {
        int num=20;
        cout<<"num inside block is "<<num<<endl;
        cout<<"num outside block is "<<::num<<endl;
    }
    cout<<"num outside block is "<<num<<endl;
    return 0;
}