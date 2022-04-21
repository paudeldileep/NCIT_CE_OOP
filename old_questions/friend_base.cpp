#include<iostream>
using namespace std;

class Base{

    protected:
        int v1[3];
        int v2[3];
         int sum[3];
    public:
        void getVectors(){
            cout<<"Enter the elements of vector 1: ";
            for(int i=0;i<3;i++){
                cout<<"v["<<i<<"]=";
                cin>>v1[i];
            }
            cout<<"Enter the elements of vector 2: ";
            for(int i=0;i<3;i++){
                cout<<"v["<<i<<"]=";
                cin>>v2[i];
            }
        }
        void displayVectors(){
            cout<<"v1=[";
            for(int i=0;i<3;i++){
                cout<<v1[i]<<" ";
            }
            cout<<"]"<<endl;
            
            cout<<"v2=[";
            for(int i=0;i<3;i++){
                cout<<v2[i]<<" ";
            }
            cout<<"]"<<endl;
        }

    friend void display(Base b);
};

class Derived:public Base{
    protected:
       
    public:
    void addVector(){
        for(int i=0;i<3;i++)
            sum[i]=v1[i]+v2[i];
    }
};

void display(Base b){
    cout<<"sum=[";
    for(int i=0;i<3;i++){
        cout<<b.sum[i]<<" ";
    }
    cout<<"]"<<endl;
}

int main(){
    Derived d;
    d.getVectors();
    d.addVector();
    d.displayVectors();
    display(d);
    return 0;
}