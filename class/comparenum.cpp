// compare a number variable present in two class objects named dice
#include<iostream>
using namespace std;

class dice{
    private:
        int num;
    public:
        void setnum(int n){
            num=n;
        }
        int getnum(){
            return num;
        }
};
int main(){
    dice d1,d2;
    d1.setnum(5);
    d2.setnum(6);
    cout<<"the numbers in d1 and d2 are:"<<endl;
    cout<<"d1: "<<d1.getnum()<<endl;
    cout<<"d2: "<<d2.getnum()<<endl;
    cout<<"the largest number is: "<<(d1.getnum()>d2.getnum()?d1.getnum():d2.getnum())<<endl;

    return 0;
}