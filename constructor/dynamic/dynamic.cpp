// dynamic constructor ; a pointerr holding single int value
#include<iostream>
using namespace std;

class Demo{
    int *p;
    public:
    Demo(){
        p=new int;
        *p=10;
    }
    void display(){
        cout<<"p="<<*p<<endl;
        //cout<<"the address is "<<p<<endl;
    }
    ~Demo(){
        delete p;
        cout<<"memory occupied by p is freed"<<endl;
    }
};
int main(){
    Demo d;
    d.display();
    return 0;
}