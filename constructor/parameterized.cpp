// parameterized constructor

#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        int rollno;
        string name;
    public:
        student(int r, string n){
            rollno=r;
            name=n;
        }
        void display(){
            cout<<"data: "<<rollno<<endl;
            cout<<"name: "<<name<<endl;
        }
};

int main(){
    student s1(10,"test");//implicit parameterized constructor
    student s2=student(20,"test2"); //explicitly call parameterized constructor
    s1.display();
    s2.display();
    return 0;
}