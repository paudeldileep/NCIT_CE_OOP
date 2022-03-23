// nesting of functions
#include <iostream>
using namespace std;

class student{
    private:
        int id;
        char name[20];
        float cgpa;
        void checkScholarship(); //private function
    public:
        void getdata(); //public function
        void display(); //public function
    
};

void student::checkScholarship(){
    if(cgpa>=3.5){
        cout<<"Congratulation! You are a scholarship holder!"<<endl;
    }
    else{
        cout<<"Sorry! You are not a scholarship holder."<<endl;
    }
}

void student::getdata(){
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter cgpa: ";
    cin>>cgpa;
}
void student::display(){
    cout<<"id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<cgpa<<endl;
    checkScholarship(); //calling private function from public function (nesting)
}

int main(){
    student s1,s2;
    s1.getdata();
    s1.display();
   // s1.checkScholarship();  //private function cannot be called from main
   
    return 0;
}
