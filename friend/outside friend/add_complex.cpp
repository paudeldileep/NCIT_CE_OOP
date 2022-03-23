// a program to add two complex numbers using friend function
#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int imag;
    public:
        void getComplex();
        void display();
        friend void add(complex,complex);
};
void complex::getComplex(){
    cout<<"enter real part: ";
    cin>>real;
    cout<<"enter imaginary part: ";
    cin>>imag;
}
void complex::display(){
    cout<<real<<" +i"<<imag<<endl;
}
void add(complex c1,complex c2){
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    cout<<"the sum of two complex numbers is: "<<endl;
    c3.display();
}
int main(){
    complex c1,c2;
    cout<<"enter first complex number: ";
    c1.getComplex();
    cout<<"enter second complex number: ";
    c2.getComplex();
    add(c1,c2);
    return 0;
}