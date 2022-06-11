// pure virtual function

#include <iostream>
using namespace std;

class Base{
    public:
        virtual void display() = 0;
};

class Derived: public Base{
    public:
        void display(){
            cout<<"Derived::display()"<<endl;
        }
};

int main(){
    Derived d;
    Base *p;
    // Base b; object of abstract class cannot be instantiated
    p = &d;
    p->display();
    return 0;
}