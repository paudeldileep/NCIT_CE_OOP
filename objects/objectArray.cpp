// array of objects
#include<iostream>
using namespace std;

class employee{
    private:
        int id;
        string name;
        float salary;
    public:
        void getData();
        void displayData();
};
void employee::getData(){
    cout<<"enter id:";
    cin>>id;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter salary:";
    cin>>salary;
}
void employee::displayData(){
    cout<<"id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"salary: "<<salary<<endl;
}

int main(){
    employee teacher[3];
    for(int i=0;i<3;i++){
        cout<<"enter data for teacher "<<i+1<<endl;
        teacher[i].getData();
    }
    cout<<"displaying data"<<endl;
    for(int i=0;i<3;i++){
        cout<<"teacher "<<i+1<<endl;
        teacher[i].displayData();
    }
    return 0;
}