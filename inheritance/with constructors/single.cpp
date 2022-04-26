// single inheritance with costructors
#include<iostream>
using namespace std;

class Base{
    protected:
        int x;
    public:
        Base(int a){
            x = a;
        }
        void display(){
            cout<<"x of base:"<<x<<endl;
        }
};

class Derived:public Base{
    int y;
    public:
        Derived(int a,int b):Base(a){
            y = b;
        }
        void display(){
            Base::display(); // calling base class display function
            cout<<"y of derived:"<<y<<endl;
        }
};

int main(){
    Derived d(10,20);
    d.display();
    return 0;
}