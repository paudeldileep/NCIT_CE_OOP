// declaring one class as a friend of another class
#include <iostream>
using namespace std;

class demo2;
class demo1{
    private :
        int data;
    public:
        void getData();
        void displayData(demo2);
};

class demo2{
    private :
        int data;
    public:
        void getData();
        void displayData();
        friend demo1;
};

void demo1::getData(){
    cout<<"enter data for demo1: ";
    cin>>data;
}
void demo1::displayData(demo2 d2){
    cout<<"data demo1: "<<data<<endl;
    cout << "data demo2: " << d2.data << endl;
}

void demo2::getData(){
    cout<<"enter data for demo2: ";
    cin>>data;
}
void demo2::displayData(){
    cout<<"data demo2: "<<data<<endl;
}

int main(){
    demo1 d1;
    demo2 d2;
    d1.getData();
    d2.getData();
    d1.displayData(d2);
    return 0;
}
