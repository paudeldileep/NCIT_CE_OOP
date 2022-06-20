//class Time to basic type total minutes conversion
#include <iostream>
using namespace std;

class Time{
    int hour;
    int minute;
    public:
    Time(){
        hour=0;
        minute=0;
    }
    Time(int h,int m){
        hour=h;
        minute=m;
    }
    void display(){
        cout<<hour<<":"<<minute<<endl;
    }
    //conversion from class to basic type
   operator int(){
       return hour*60+minute;
   }
};

int main(){
    Time t1(1,30);
    t1.display();
    int minutes=t1;
    cout<<minutes<<endl;
    return 0;
}