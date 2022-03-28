#include<iostream>
using namespace std;

class demo{
    int data;
    static int count;
    public:
        demo(){
            data=0;
            count++;
        }

        void putData(){
            cout<<"data:"<<data<<endl;
            cout<<"count:"<<count<<endl;
        }
};

int demo::count=0;

int main(){
    demo d1;
    cout<<"--object 1--"<<endl;
    d1.putData();

    demo d2;
     cout<<"--object 2--"<<endl;
    d2.putData();


    demo d3;
     cout<<"--object 3--"<<endl;
    d3.putData();

    return 0;
}