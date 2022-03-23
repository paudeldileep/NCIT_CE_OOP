// example to show use of static variables
#include <iostream>
using namespace std;

class demo{
    private:
        int num;
        static int count; // static variable declaration
    public:
        //static int x;
        void update(){
           num= ++count;
        }
        void displayData(){
            cout<<"num: "<<num<<endl;
            cout<<"count: "<<count<<endl;
        }
        // static int getCount(){
        //     return count;
        // }
        static int getCount();
};
int demo::count; // or int demo::count=0; // static variable definition
//int demo::x; // static variable definition
  int demo::getCount(){
    return count;
}
int main(){
    demo d1,d2;
    cout<<"initial count via d1: "<<d1.getCount()<<endl;
    d1.update();
    cout<<"updated count via d1: "<<d1.getCount()<<endl;
    cout<<"initial count via d2: "<<d2.getCount()<<endl;
    d2.update();
    cout<<"updated count via d2: "<<d2.getCount()<<endl;
    d1.displayData();
    d2.displayData();

    //static function call with classname
    cout<<"static function call with classname"<<endl;
    cout<<"count: "<<demo::getCount()<<endl;
    // demo::x++;
    // cout<<"x: "<<demo::x<<endl;

    return 0;
}