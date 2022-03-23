// check whether given number is binary or not using a private function
#include <iostream>
#include <string.h>
using namespace std;

class binary{
    private:
        string number;
        void checkBinary();
    public:
        void getBinary();
        void printBinary(); 

};
void binary::checkBinary(){
    int i;
    for(i=0;i<number.length();i++){
        if(number[i]!='0' && number[i]!='1'){
            cout<<number<<"is not a binary number"<<endl;
            break;
        }
        // if(number.at(i)!='0' && number.at(i)!='1'){
        //     cout<<number<<" is not a binary number"<<endl;
        //     break;
        // }
    }
    if(i==number.length()){
        cout<<number<<" is a binary number"<<endl;
    }
}
void binary::getBinary(){
    cout<<"Enter a binary number: ";
    cin>>number;
}
void binary::printBinary(){
    checkBinary();
    cout<<"And length of "<<number<<" is "<<number.length()<<endl;
}

int main(){
    binary b;
    b.getBinary();
    b.printBinary();
    return 0;
}

