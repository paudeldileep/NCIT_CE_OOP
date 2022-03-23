// friend function to add data of two objects
#include<iostream>
using namespace std;

class Exam{
    private:
        float gpa;
    public:
        void getGPA();
        void displayGPA();
        friend void average(Exam,Exam);
};
void Exam::getGPA(){
   
    cin>>gpa;
}
void Exam::displayGPA(){
    cout<<"gpa: "<<gpa<<endl;
}
void average(Exam e1,Exam e2){
    float avg=(e1.gpa+e2.gpa)/2;
    cout<<"and the average gpa is: "<<avg<<endl;
  
}

int main(){
    Exam e1,e2;
    cout<<"enter first exam gpa: ";
    e1.getGPA();
    cout<<"enter second exam gpa: ";
    e2.getGPA();
    cout<<"gpa of two exams are: "<<endl;
    e1.displayGPA();
    e2.displayGPA();
    average(e1,e2);
    return 0;
}