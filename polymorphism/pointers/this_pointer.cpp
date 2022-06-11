// this pointer
#include <iostream>
#include<string.h>
using namespace std;

class Person{
    char name[20];
    int age;
    public:
        void getData(char *name, int age){

            // age=age; //error
            // strcpy(name,name); //this is not working
            this->age = age; //this is working
            strcpy(this->name, name);
        }
        void print(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main(){
    Person s;
    char n[]="Raj";
    int a=10;
    s.getData(n,a);
    s.print();
    return 0;
}