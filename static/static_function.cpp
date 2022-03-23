// example showcasing use of static variables and static functions
#include <iostream>
using namespace std;

class demo{
    private:
        static int count; // static variable declaration
        int num;
    public:
        void updatecount(){
            count++;
        }
        int getcount(){
            return count;
        }
        static void updatecount2(){ // static function declaration and definition; static functions can be called without creating an object; static functions can only access static variables
            count++;
        }
        static int getcount2(){
            return count;
        }
};
int demo::count; // or int demo::count=0; // static variable definition

int main(){
    demo d1,d2;
    cout<<"initial count via d1: "<<d1.getcount()<<endl;
    d1.updatecount2(); // static function call via object
    //calling static function without creating an object is possible.
    demo::updatecount2();
    cout<<"updated count via d1: "<<d1.getcount2()<<endl;
    cout<<"initial count via d2: "<<d2.getcount2()<<endl;
    demo::updatecount2();
    cout<<"updated count via d2: "<<d2.getcount2()<<endl;

    return 0;
}