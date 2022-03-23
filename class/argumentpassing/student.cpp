// program to demonstrate passing argument to member function
#include<iostream>
#include<cstring>
using namespace std;

class student{
    private:
        int roll;
        char name[20];
    public:
        void getData(int,char []);
        void printData();
};
void student::getData(int r,char n[]){
    roll=r;
    strcpy(name,n);
}
void student::printData(){
    cout<<"Roll: "<<roll<<endl;
    cout<<"Name: "<<name<<endl;
}

int main(){
    student s;
    //s.getData(1,"Raj");
    char name[20];
    cout<<"Enter name: ";
    cin>>name;
    s.getData(1,name);
    s.printData();
    return 0;
}