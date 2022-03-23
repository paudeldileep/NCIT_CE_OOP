// static data and functions for joint account

#include <iostream>
#include<string>
using namespace std;

class account{
    private:
        float balance;
        static float joint_balance;
        string name;
    public:
        void getData();
        void deposit(float);
        void withdraw(float);
        void displayData();
        static float getJointBalance();
};
float account::joint_balance=0;
void account::getData(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter balance:";
    cin>>balance;
    joint_balance+=balance;
}
void account::deposit(float amount){
    balance+=amount;
    joint_balance+=amount;
}
void account::withdraw(float amount){
    balance-=amount;
    joint_balance-=amount;
}
void account::displayData(){
    cout<<"name: "<<name<<endl;
    cout<<"balance: "<<balance<<endl;
    //cout<<"joint balance: "<<joint_balance<<endl;
}
float account::getJointBalance(){
    return joint_balance;
}

int main(){
    account a1,a2;
    cout<<"initial joint balance: "<<account::getJointBalance()<<endl;
    cout<<"enter initial data for account 1"<<endl;
    a1.getData();
    cout<<"enter initial data for account 2"<<endl;
    a2.getData();

    //performing deposit and withdraw operations
    cout<<"performing deposit"<<endl;
    a1.deposit(1000);
    a2.deposit(2000);
    //after depositi
    cout<<"after deposit"<<endl;
    cout<<"joint balance: "<<account::getJointBalance()<<endl;
    a1.displayData();
    a2.displayData();
    cout<<"performing withdraw"<<endl;
    a1.withdraw(500);
    a2.withdraw(1000);
    //after withdraw
    a1.displayData();
    a2.displayData();
    cout<<"joint balance: "<<account::getJointBalance()<<endl;
    return 0;
}
