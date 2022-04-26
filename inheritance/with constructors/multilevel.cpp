#include<iostream>
using namespace std;

class B1{
    protected:
        int x;
    public:
        B1(int a){
            x = a;
        }
        void display(){
            cout<<"x of B1:"<<x<<endl;
        }
};

class B2:public B1{
    protected:
    int y;
    public:
        B2(int a,int b):B1(a){
            y = b;
        }
        void display(){
            //B1::display(); // calling base class display function
            cout<<"y of B2:"<<y<<endl;
        }
};

class D:public B2{
    int z;
    public:
        D(int a,int b,int c):B2(a,b){
            z = c;
        }
        void display(){
            B1::display();
            B2::display(); // calling base class display function
            cout<<"z of D:"<<z<<endl;
        }
};

int main(){
    D d(10,20,30);
    d.display();
    return 0;
}