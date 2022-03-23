//a simple class in c++
#include <iostream>
using namespace std;

//class declaration
class student
{
    private:
        int rollno;
        char name[20];
        float marks;
    public:
        void getdata();
        void putdata();
};

//function definition
void student::getdata()
{
    cout<<"Enter rollno, name and marks: ";
    cin>>rollno>>name>>marks;
}
void student::putdata()
{
    cout<<"Rollno: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
}

int main(){
    student s;
    s.getdata();
    s.putdata();
    return 0;
}