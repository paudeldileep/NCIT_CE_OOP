//conversion from celsius to fahrenheit (using class to class conversion)
#include <iostream>
using namespace std;

class Fahrenheit{
    float fahrenheit;
    public:
    Fahrenheit(){
        fahrenheit=0;
    }
    Fahrenheit(float f){
        fahrenheit=f;
    }
    void display(){
        cout<<"Temp in degree fahrenheit:"<<fahrenheit<<endl;
    }
    float getFahrenheit(){
        return fahrenheit;
    }
};

class Celsius{
    float celsius;
    public:
    Celsius(){
        celsius=0;
    }
    Celsius(float c){
        celsius=c;
    }
    //conversion from class to class(f to c)
    Celsius(Fahrenheit f){
        celsius=(f.getFahrenheit()-32)*5/9;
    }

    void display(){
        cout<<"celsius is "<<celsius<<endl;
    }
    //conversion from class to class(c to f)
    operator Fahrenheit(){
        float f=celsius*9/5+32;
        return Fahrenheit(f); 
    }
};

int main(){
    Celsius c1(30);
    c1.display();
    Fahrenheit f1=c1;
    f1.display();
    return 0;
}