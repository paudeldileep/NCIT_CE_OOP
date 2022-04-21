#include<iostream>
using namespace std;

class Engine{
    private:
        int engine_no;
    public:
        Engine(int i){
            engine_no=i;
        }
        void startEngine(){
            cout<<"Engine number "<<engine_no<<" starting..."<<endl;
        }
};

class Car{
    private:
        string name;
        Engine e;
    public:
        Car(string n,int i):name(n),e(i){
            
        }
       void startCar(){
            e.startEngine();
            cout<<"Car "<<name<<" started!"<<endl; 
       }
};

int main(){
    Car c("BMW",1);
    c.startCar();
    return 0;
}