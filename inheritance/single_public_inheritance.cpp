// single inheritance in public mode
#include<iostream>
using namespace std;

class B{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void getBData();
        void displayB();
};
void B::getBData(){
    x=10;
    y=20;
    z=30;
}
void B::displayB(){
    cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<endl;
}
class D:public B{ //class D inheriting properties of B publicly
    private:
        int sum;
    public:
        void findSum();
        void displaySum();
};
void D::findSum(){
    sum=y+z;
}
void D::displaySum(){
    cout<<"sum="<<sum<<endl;
}
int main(){
    D d1; //object of derived class
    d1.getBData();
    d1.displayB();
    d1.findSum(); 
    d1.displaySum();
    
    return 0;
    
}