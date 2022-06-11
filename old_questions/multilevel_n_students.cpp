// read and display n students data using multilevel inheritance
#include<iostream>
using namespace std;

// create a const for maximum number of students
const int MAX = 10;

class Person{
    protected:
        string name;
    public:
        Person(){
            name = "";
        }
        Person(string n){
            name = n;
        }
        void displayName(){
            cout<<"Name:"<<name<<endl;
        }
};

class Exam:public Person{
    protected:
        float marks;
    public:
        Exam(){
            marks = 0;
        }
        Exam(string n,float m):Person(n){
            marks = m;
        }
        void displayMarks(){
            cout<<"Marks:"<<marks<<endl;
        }
};

class Student:public Exam{
    protected:
        int rollNo;
    public:
    Student(){
        rollNo = 0;
    }
        Student(string n,float m,int r):Exam(n,m){
            rollNo = r;
        }
        void displayRollNo(){
            cout<<"Roll No:"<<rollNo<<endl;
        }
};

int main(){
    // array of students
    // ask value of n
    // create n students
    // display n students data
    Student s[MAX];
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    
    for(int i=0;i<n;i++){
        string name;
        float marks;
        int rollNo;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter marks:";
        cin>>marks;
        cout<<"Enter rollNo:";
        cin>>rollNo;
        s[i] = new Student(name,marks,rollNo);
    }

    return 0;
}