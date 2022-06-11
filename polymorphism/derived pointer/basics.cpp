//pointer to derived class objects

#include<iostream>
using namespace std;

class Base{
    protected:
        int b;
    public:
        void getB(int x){
            b = x;
        }
        void putB(){
            cout<<"Base::b = "<<b<<endl;
        }
};

class Derived: public Base{
    protected:
        int d;
    public:
        void getD(int x){
            d = x;
        }
        
        void putD(){
            cout<<"Derived::d = "<<d<<endl;
        }
};

int main(){
    Derived d;
    Base *p;
    p = &d;
    //---------------pointer of base pointed to derived accesses own members (that are in derived class)
    p->getB(1);
   p->putB();
   //-------------------------
   //----------------
    // p->getD(20);//error - pointer of base class cannot access derived class members
    // p->putD(); //error
    //-------------------

    //casting pointer of base to pointer of derived type
    ((Derived*)p)->getD(20);
    ((Derived*)p)->putD();
    return 0;
}