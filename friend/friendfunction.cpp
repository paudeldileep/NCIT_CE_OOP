// making outside function friend of class

#include <iostream>
using namespace std;

class demo{
    private:
        int a;
        int b;
    public:
        void getData();
        void displayData();
        friend void add(demo,demo);
};

void demo::getData(){
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
}
void demo::displayData(){
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}
void add(demo d1,demo d2){
    int sum=d1.a+d2.a;
    cout<<"sum of a in d1 and d2: "<<sum<<endl;
    cout<<"sum of b in d1 and d2: "<<d1.b+d2.b<<endl;

}
int main(){
    demo d1,d2;
    d1.getData();
    d2.getData();
    d1.displayData();
    d2.displayData();
    add(d1,d2);
    return 0;
}
