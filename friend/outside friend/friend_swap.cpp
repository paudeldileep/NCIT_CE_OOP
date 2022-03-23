// swp two class data using friend function

#include<iostream>
using namespace std;

class Two; //forward declaration
class One{
    private:
      int data_one;
    public:
        void getData(){
            cout<<"enter data_one: ";
            cin>>data_one;
        }
        void displayData(){
            cout<<"data_one: "<<data_one<<endl;
        }
        friend void swap(One &,Two &);
};
class Two{
    private:
      int data_two;
    public:
        void getData(){
            cout<<"enter data_two: ";
            cin>>data_two;
        }
        void displayData(){
            cout<<"data_two: "<<data_two<<endl;
        }
        friend void swap(One &,Two &);
};

void swap(One &o1,Two &o2){
    int temp=o1.data_one;
    o1.data_one=o2.data_two;
    o2.data_two=temp;
}

int main(){
    One o1;
    Two o2;
    o1.getData();
    o2.getData();
    cout<<"before swap"<<endl;
    o1.displayData();
    o2.displayData();
    swap(o1,o2);
    cout<<"after swap"<<endl;
    o1.displayData();
    o2.displayData();
    return 0;
}