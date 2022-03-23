// dynamic constructor
// dynamic constructor is a constructor which is called at run time.
// dynamic constructor is used to initialize the object at run time.

#include<iostream>
using namespace std;

class complex{
    private:
       int *real;
       int *imag;
    public:
        complex(){
            real=new int;
            imag=new int;
            *real=0;
            *imag=0;
        }
        complex(int r, int i){
            real=new int(r);
            imag=new int(i);
            // *real=r;
            // *imag=i;
        }
        void display(){
            cout<<*real<<"+"<<*imag<<"i"<<endl;
        }
        ~complex(){
            delete real;
            delete imag;
            cout<<"destructor called"<<endl;
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
