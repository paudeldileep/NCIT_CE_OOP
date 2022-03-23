// compare data value of three classes using friend function
#include<iostream>
using namespace std;

class two;
class three;
class one{
    private:
        int a;
    public:
        void getA();
        void displayA();
        friend void max(one,two,three);
};

class two{
    private:
        int b;
    public:
        void getB();
        void displayB();
        friend void max(one,two,three);
};
class three{
    private:
        int c;
    public:
        void getC();
        void displayC();
        friend void max(one,two,three);
};

void one::getA(){
    cin>>a;
}
void one::displayA(){
    cout<<"a: "<<a<<endl;
}
void two::getB(){
    cin>>b;
}
void two::displayB(){
    cout<<"b: "<<b<<endl;
}
void three::getC(){
    cin>>c;
}
void three::displayC(){
    cout<<"c: "<<c<<endl;
}
void max(one o,two t,three th){
    if(o.a>t.b && o.a>th.c){
        cout<<"a is the max"<<endl;
    }
    else if(t.b>o.a && t.b>th.c){
        cout<<"b is the max"<<endl;
    }
    else if(th.c>o.a && th.c>t.b){
        cout<<"c is the max"<<endl;
    }
    else{
        cout<<"all are equal"<<endl;
    }
}

int main(){
    one o;
    two t;
    three th;
    cout<<"enter a: ";
    o.getA();
    cout<<"enter b: ";
    t.getB();
    cout<<"enter c: ";
    th.getC();
    cout<<"a b c are: "<<endl;
    o.displayA();
    t.displayB();
    th.displayC();
    cout<<"the max is: "<<endl;
    max(o,t,th);
    return 0;
}