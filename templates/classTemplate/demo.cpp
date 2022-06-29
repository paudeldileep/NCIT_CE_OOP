
#include<iostream>

using namespace std;

template<class T>
class demo{
    T a,b;
    public:
    demo(){
        a=0;
        b=0;
    }
    // demo(T aa,T bb){
    //     a=aa;
    //     b=bb;
    // }
    // void display(){
    //     cout<<"a="<<a<<" b="<<b<<endl;
    // }
    demo(T aa,T bb);
    T getA(){
        return a;
    }
    void display();
};
template<class T>
demo<T>::demo(T aa,T bb){
    a=aa;
    b=bb;
}
template<class T>
void demo<T>::display(){
    cout<<"a="<<a<<" b="<<b<<endl;
}

int main(){
    demo<int>d1;
    d1.display();
    demo<float>d2(10.5,20.5);
    d2.display();
    demo<char>d3('a','b');
    d3.display();
    
    return 0;
}