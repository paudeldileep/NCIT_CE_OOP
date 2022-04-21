#include<iostream>
using namespace std;

class demo{
    int *p;//pointer to an int
    public:
    demo(){
        p=new int; //memory allocated for p
        *p=10; //value assigned to p

        //p=new int(10);
    }
    void display(){
        cout<<"p="<<*p<<endl;
    }
    ~demo(){
        delete p; //deallocate memory
        cout<<"destructor called"<<endl;
    }

};

int main(){
    demo d; //object created
    d.display();
    {
        demo d1;//object created
        d1.display();
        //scope of d1 ends here
        //destructor of d1 is called
    }
    return 0;
    //scope of d ends here
    //destructor of d is called
}