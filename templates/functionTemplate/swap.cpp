
#include<iostream>
using namespace std;

template<class T>
void Swap(T &a,T &b){
    T tmp=a;
    a=b;
    b=tmp;
}

int main(){
    int a,b;
    cout<<"enter two int numbers"<<endl;
    cin>>a>>b;
    Swap(a,b);
    cout<<"a="<<a<<" b="<<b<<endl;
    float c,d;
    cout<<"enter two float numbers"<<endl;
    cin>>c>>d;
    Swap(c,d);
    cout<<"c="<<c<<" d="<<d<<endl;
    return 0;
}