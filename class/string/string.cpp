// get multi word input from user
#include<iostream>
#include<string>
using namespace std;

class demo{
    private:
        string name;
        int roll;
    public:
        void getData();
        void printData();
};

void demo::getData(){
    cout<<"enter name";
    getline(cin,name);
    cout<<"enter roll";
    cin>>roll;
}
void demo::printData(){
    cout<<"name: "<<name<<endl;
    cout<<"roll: "<<roll<<endl;
}

int main(){
    demo d;
    d.getData();
    d.printData();
    return 0;
}