#include<iostream>
using namespace std;

class two;
class three;

class one{
    int a;
    public:
    one(int x){
        a=x;
    }

    friend void add(one o,two t,three th);

};

class two{
    int b;
    public:
    two(){
        b=4;
    }
    friend void add(one o,two t,three th);
    
};

class three{
    int c;
    public:
    three(){
        c=3;
    }
    friend void add(one o,two t,three th);
};

void add(one o,two t,three th){
    int sum=o.a + t.b + th.c;
    cout <<"sum="<<sum<<endl;
}


int main(){

    //one o1;
    two t1;
    three th1;

    int a;
    cout<<"enter value of a";
    cin>>a;
    one o1(a);

    //one o2(10);

    add(o1,t1,th1);


    return 0;
}