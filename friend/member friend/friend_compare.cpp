// friend function within another class that compares data in two classe
#include<iostream>
using namespace std;

class Two;
class One{
    private:
        int data;
    public:
        void getData();
        void displayData();
        void compare(Two);
};

class Two{
    private:
        int data;
    public:
        void getData();
        void displayData();
        friend void One::compare(Two);
};

void Two::getData(){
    cout<<"enter data for Two: ";
    cin>>data;
}
void Two::displayData(){
    cout<<"data Two: "<<data<<endl;
}

void One::getData(){
    cout<<"enter data for One: ";
    cin>>data;
}
void One::displayData(){
    cout<<"data One: "<<data<<endl;
}

void One::compare(Two t){
    if(data>t.data)
        cout<<"data One is greater than data One"<<endl;
    else if(data<t.data)
        cout<<"data One is less than data One"<<endl;
    else
        cout<<"data Two is equal to data One"<<endl;
}

int main(){
    Two t;
    One o;
    t.getData();
    o.getData();
    t.displayData();
    o.displayData();
    o.compare(t);
    return 0;
}
