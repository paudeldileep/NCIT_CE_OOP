#include<iostream>
using namespace std;

class TestArg
{
    int data;
public:
    void getdata(int d=10);
    void display();
};

void TestArg::getdata(int d)
{
    data=d;
}

void TestArg::display()
{
    cout<<"Data is: "<<data<<endl;
}

int main(){
    TestArg t1,t2;
    t1.getdata(20);
    t1.display();
    t2.getdata();
    return 0;
}