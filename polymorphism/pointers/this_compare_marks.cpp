//this pointer to return objects

#include<iostream>
#include<string.h>
using namespace std;

class Student{
    char name[20];
    float marks;

    public:
        void getData(char *name, float marks){
            strcpy(this->name, name);
            this->marks = marks;
        }
        void print(){
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
        }

        Student & compareMarks(Student & s){
            if(marks > s.marks){
                return *this;
            }
            else{
                return s;
            }
        }
};
int main(){
    Student s1, s2;
    char name1[]="Raj";
    char name2[]="Raju";
    s1.getData(name1, 90);
    s2.getData(name2, 100);
    Student s3 = s1.compareMarks(s2);
    cout<<"Student with highest marks is: "<<endl;
    s3.print();
    return 0;
}