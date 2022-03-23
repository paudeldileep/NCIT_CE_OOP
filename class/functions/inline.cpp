// inline function within and outside class
#include <iostream>
using namespace std;

class demo{
    private:
        int num;
    public:
        void setnum(int n){ // function defined within class beaves as inline function
            num=n;
        }
        void getnum(); // function declaration
};
inline void demo::getnum(){ // to make function defined outside the class inline, use inline keyword
    cout<<"the number is: "<<num<<endl;
}

int main(){
    demo d1,d2;
    d1.setnum(5);
    d2.setnum(6);
    cout<<"the numbers in d1 and d2 are:"<<endl;
    d1.getnum();
    d2.getnum();

    return 0;
}
