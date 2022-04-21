// dynamic memory allocation
// for block of memory

#include<iostream>
using namespace std;

class demo{
    int size;
    int *p;

    public:
        demo(int s);
        void display();
        ~demo();
};
demo::demo(int s){
    size=s;
    p=new int[size];
    for(int i=0;i<size;i++){
        p[i]=i;
    }
}
void demo::display(){
    for(int i=0;i<size;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
demo::~demo(){
    delete []p; //deallocate memory
    cout<<"destructor called"<<endl;
}


int main(){
    int size;
    // ask user for size of array
    cout<<"Enter size of array: ";
    cin>>size;
    // create object of class demo
    demo d(size);
    d.display();
    return 0;
}