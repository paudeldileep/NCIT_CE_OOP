#include<iostream>
#include<cstring>
using namespace std;

class student{
    private:
        int roll;
        char name[20];
        float marks;
    public:
        void getdata(int r,char n[],float m);
        void putdata();
};

void student::getdata(int r,char n[],float m){
     roll=r;
            strcpy(name,n);
            marks=m;
}
void student::putdata(){
    cout<<"Roll number: "<<roll<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
}

int main(){
    student s1;
    int roll;
    float marks;
    char name[20];
    cout<<"Enter roll number: ";
    cin>>roll;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks: ";
    cin>>marks;
    s1.getdata(roll,name,marks);
    s1.putdata();
    return 0;
}