// example with default constructor

#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        int rollno;
        string name;
    public:
        student(){
            rollno=0;
            name="test";
        }
        void display(){
            cout<<"data: "<<rollno<<endl;
            cout<<"name: "<<name<<endl;
        }
};

int main(){
    student d;
    d.display();
    return 0;
}