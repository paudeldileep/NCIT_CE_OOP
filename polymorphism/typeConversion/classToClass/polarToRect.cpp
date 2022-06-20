//polar coordinates to rect coordinates using operator function and constructor function
#include <iostream>
#include<math.h>
using namespace std;

class Polar;
class Rectangle{
    float x,y;
    public:
    Rectangle(){
        x=0;
        y=0;
    }
    Rectangle(float a,float b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"x="<<x<<" y="<<y<<endl;
    }
    Rectangle(Polar p);//2.
};

class Polar{
    float r,a;
    public:
        Polar(){
            r=0;
            a=0;
        }
        Polar(float rr,float aa){
            r=rr;
            a=aa;
        }
        void display(){
            cout<<"r="<<r<<" a="<<a<<endl;
        }
        //2.
        float getR(){
            return r;
        }
        float getA(){
            return a;
        }
        //conversion routine
        //operator Rectangle(); 1.
};
//1.
// Polar::operator Rectangle(){
//     float x=r*cos(a);
//     float y=r*sin(a);
//     return Rectangle(x,y);
// }

//2.
Rectangle::Rectangle(Polar p){
    x=p.getR()*cos(p.getA());
    y=p.getR()*sin(p.getA());
}

int main(){
    Rectangle R;
    Polar P(6.4,0.89);
    R=P;
    P.display();
    R.display();
    // Rectangle R2(4,5);
    // Polar P2;
    // P2=R2;
    // P2.display();
    // R2.display();
    return 0;
}