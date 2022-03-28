#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        int roll;
        string name;
    public:
        void getData(){
            cout<<"enter name and roll number:";
            cin>>name>>roll;
        }
        void putData();
};

void student::putData(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Num:"<<roll<<endl;
}

int main(){

    //object instantiation/creation
    student s1,s2;
    cout<<"enter student 1 data"<<endl;

    s1.getData();

    cout<<"enter student 2 data"<<endl;
    s2.getData();

    cout<<"--the given student 1 details are--"<<endl;

    s1.putData();

    cout<<"--the given student 2 details are--"<<endl;
    s2.putData();


    return 0;
}
