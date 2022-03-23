// constructor overloading

#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(){
            hour=0;
            minute=0;
            second=0;
        }
        Time(int h, int m){
            hour=h;
            minute=m;
            second=0;
        }
        Time(int h, int m, int s){
            hour=h;
            minute=m;
            second=s;
        }
        Time(Time & t){
            hour=t.hour;
            minute=t.minute;
            second=t.second;
        }
        void display(){
            cout<<"The time is: "<<hour<<" Hrs: "<<minute<<" Mins: "<<second<<" Seconds"<<endl;
        }
};

int main(){
    Time t1;
    t1.display();
    Time t2(10,20);
    t2.display();
    Time t3(10,20,30);
    t3.display();
    Time t4(t2);
    t4.display();
    return 0;
}