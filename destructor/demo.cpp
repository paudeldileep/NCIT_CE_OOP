#include<iostream>
using namespace std;

class demo{
    private:
        int num;
    public:
        demo(int n){
            num=n;
            cout<<"constructor called"<<endl;
        }
        void display(){
            cout<<"data: "<<num<<endl;
        }
        // ~demo(){
        //     cout<<"destructor called"<<endl;
        // }
        ~demo();
};
demo::~demo(){
    cout<<"data:"<<num<<endl;
    cout<<"destructor called"<<endl;
}

int main(){
    demo d1(10);
    //d1.display();
    {
        //demo d2(20);
        //d2.display();
        cout<<"exiting a scope"<<endl;
    }
    demo d2(2);
    cout<<"exiting main"<<endl;
    return 0;
}