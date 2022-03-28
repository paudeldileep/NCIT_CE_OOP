//header file
#include<iostream>
using namespace std;


//function two add two numbers
//function declaration
//void sum(int, int);

//function definoition
void sum(int x, int y){
    int s;
    s=x+y;
    cout<<"the sum="<<s<<endl;
}

int diff(int x, int y){
    int s;
    s=x-y;
    return s;
}



//function
int main(){
    //variables
    // int a = 10;
    // float b = 20.5;

    //showing output to user
    //cout<<"a="<<a<<endl;

//ask input from user
    // cout<<"enter an integer number"<<endl;
    // cin>>a;
    // cout<<"you entered "<<a<<endl;

    int a;
    int b;
     cout<<"enter two integer numbers"<<endl;
    cin>>a>>b;

    //function call
    sum(a,b);

    int d;
    d=diff(a,b);

    cout<<"the difference is"<<d<<endl;



   return 0; 
}
