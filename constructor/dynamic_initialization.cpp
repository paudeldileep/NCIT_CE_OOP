// dynamic initialization of objects
#include <iostream>
using namespace std;

class complex{
    private:
        int real;
        int imag;
    public:
        complex()
        {
            real=0;
            imag=0;
        }
        complex(int r, int i)
        {
            real=r;
            imag=i;
        }
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};

int main(){
    int r,i;
    //default constructor
    complex c1;
    cout<<"First complex number: ";
    c1.display();
    //parameterized constructor
    cout<<"Enter real and imaginary part for second complex number: ";
    cin>>r>>i;
    complex c2(r,i);
    cout<<"Given complex number: ";
    c2.display();
    return 0;
}