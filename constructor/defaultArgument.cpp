// constructors with default argument

#include<iostream>
using namespace std;

class complex{
    private:
        float real;
        float imag;
    public:
        // complex(){
        //     real=0;
        //     imag=0;
        // }
        // complex(float n=0){
        //     real=n;
        //     imag=n;
        // }
        complex(float r=0, float i=0)
        {
            real=r;
            imag=i;
        }
        void print(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};

int main(){
    complex c1(10,20);
    c1.print();
    complex c2(10);
    c2.print();
    complex c3;
    c3.print();
    return 0;
}
