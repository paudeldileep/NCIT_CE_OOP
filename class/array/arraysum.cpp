// program to find sum of array
#include<iostream>
using namespace std;

class demo{
    private:
        int numbers[10];
        int sum;
    public:
        void getArray();
        void printArray();
        void sumArray();
};
void demo::getArray(){
    int i;
    for(i=0;i<10;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>numbers[i];
    }
}
void demo::printArray(){
    int i;
    for(i=0;i<10;i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
}
void demo::sumArray(){
    int i;
    sum=0;
    for(i=0;i<10;i++){
        sum+=numbers[i];
    }
    cout<<"Sum of array is "<<sum<<endl;
}

int main(){
    demo d;
    d.getArray();
    d.printArray();
    d.sumArray();
    return 0;
}