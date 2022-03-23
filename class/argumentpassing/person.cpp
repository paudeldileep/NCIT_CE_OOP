#include<iostream>
#include<string.h>
using namespace std;

class person{
    private:
        string name;
        int age;
    public:
        void getData(string ,int );
        void printData();
};

void person::getData(string n,int a){
    name=n;
    age=a;
}

void person::printData(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}

int main(){
    person p;
    
    p.getData("name",20);
    p.printData();
    return 0;
}