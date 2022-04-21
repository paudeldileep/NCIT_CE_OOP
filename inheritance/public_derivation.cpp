// public derivation example
#include <iostream>
using namespace std;

class Base{
    private:
        int x;
    public:
        int y;
        void setXY(){
            x=10;
            y=20;
        }
        void showXY(){
            cout << "x = " << x << endl;
            cout << "y = " << y << endl;
        }
        int getXValue(){
            return x;
        }
};
class Derived: public Base{
    private:
        int z;
    public:
        void setZ(){
            z=30;
        }
        void showZ(){
            showXY();   // calling showXY() (derived function from Base class)
            cout << "z = " << z << endl;
        }
        void sum(){
            //cout << "x + y + z = " << x + y + z << endl; // error: cannot access private member x
            
            int baseX=getXValue(); // access base class member x through public member function
            cout << "x + y + z = " << baseX + y + z << endl;
        }
};

int main(){
    Derived d;
    d.setXY();
    d.setZ();
    // d.showXY();
    d.showZ();
    d.sum();

    d.y=50;  //since y is public, we can access it directly
    d.sum();
    return 0;
}