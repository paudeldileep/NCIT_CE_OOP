// principle of substitutability
#include <iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"Base class"<<endl;
        }
};
class Derived:public Base{
    public:
        void display(){
            cout<<"Derived class"<<endl;
        }
};

void testDisplay(Base b){
    b.display();
}

int main(){
    Derived d;
    testDisplay(d);
    return 0;
}