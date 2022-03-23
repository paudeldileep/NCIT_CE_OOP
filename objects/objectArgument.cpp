// passing object as argument
#include<iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
    public:
        void getData();
        void displayData();
        void addTime(Time,Time);
};

void Time::getData(){
    cout<<"enter hours:";
    cin>>hours;
    cout<<"enter minutes:";
    cin>>minutes;
}
void Time::displayData(){
    cout<<"hours: "<<hours<<endl;
    cout<<"minutes: "<<minutes<<endl;
}
void Time::addTime(Time t1,Time t2){
    // minutes=t1.minutes+t2.minutes;
    // hours=t1.hours+t2.hours;
    // if(minutes>=60){
    //     hours+=minutes/60;
    //     minutes=minutes%60;
    // }
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=t1.hours+t2.hours+hours;
}

int main(){
    Time t1,t2;
    t1.getData();
    t2.getData();
    t1.displayData();
    t2.displayData();
    t1.addTime(t1,t2);
    t1.displayData();
    return 0;
}