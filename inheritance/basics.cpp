// inheritance: deriving properties from a base class to a derived class
#include <iostream>
using namespace std;

class Base{
    private:
        int x;
    public:
        void setX(){
            cout << "Enter x: ";
            cin >> x;
        }
        void showX(){
            cout << "x = " << x << endl;
        }
        int getXValue(){
            return x;
        }
};

class Derived: public Base{
    private:
        int y;
    public:
        void setY(){
            cout << "Enter y: ";
            cin >> y;
        }
        void showY(){
            cout << "y = " << y << endl;
        }
        int getYValue(){
            return y;
        }
};

int main(){
    Derived d;
    d.setX();
    d.setY();
    d.showX();
    d.showY();
    Base b;
    b.showX();
    cout << "x + y = " << d.getXValue() + d.getYValue() << endl;
    return 0;
}