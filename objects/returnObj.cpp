// return type object : add two complex numbers
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int imag;
    public:
        void getData();
        void displayData();
        complex addComplex(complex,complex);
};
void complex::getData(){
    cout<<"enter real:";
    cin>>real;
    cout<<"enter imag:";
    cin>>imag;
}
void complex::displayData(){
    cout<<"complex number is: "<<real<<"+"<<imag<<"i"<<endl;
}
complex complex::addComplex(complex c1,complex c2){
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}

int main(){
    complex c1,c2,c3;
    c1.getData();
    c2.getData();
    c3=c1.addComplex(c1,c2);
    c3.displayData();
    return 0;
}
