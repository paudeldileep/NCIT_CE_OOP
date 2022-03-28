#include<iostream>

using namespace std;

class demo{
    private:
        int data;
        static int count;
    public:
        void getData();
        void putData();
};

//defining static member
int demo::count=0;

void demo::getData(){
    cout<<"enter data:";
    cin>>data;
    count++;
}

void demo::putData(){
    cout<<"data is:"<<data<<endl;
    cout<<"count is:"<<count<<endl;
}

int main(){
    demo d1;

    cout<<"--Initially--"<<endl;
    d1.putData();

    d1.getData();

    demo d2;

    d2.getData();

    cout<<"--Finally--"<<endl;
    d1.putData();
    d2.putData();

    return 0;

}