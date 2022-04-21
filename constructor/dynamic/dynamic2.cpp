// dynamic constructor with pointer for array
#include<iostream>
using namespace std;

class Demo{
    int *p;
    public:
    Demo(int size){
        p=new int[size];
        for(int i=0;i<size;i++){
            p[i]=i;
        }

    }
    void display(int size){
        cout<<"p=";
        for(int i=0;i<size;i++)
            cout<<p[i]<<" ";
        cout<<endl;
        //cout<<"the address is "<<p<<endl;
    }
    ~Demo(){
        delete []p;
        cout<<"memory occupied by p is freed"<<endl;
    }
};


int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    Demo d(size);
    d.display(size);
    return 0;
}

