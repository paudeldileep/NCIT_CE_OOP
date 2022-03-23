// passing object as reference : program:transfer amout from one object to another

#include<iostream>
using namespace std;

class Account{
    private:
        int accNo;
        int balance;
    public:
        void getData();
        void displayData();
        void transfer(Account &,int);
};

void Account::getData(){
    cout<<"enter accNo:";
    cin>>accNo;
    cout<<"enter balance:";
    cin>>balance;
}
void Account::displayData(){
    cout<<"accNo: "<<accNo<<endl;
    cout<<"balance: "<<balance<<endl;
}
void Account::transfer(Account &a,int amt){
    balance=balance-amt;
    a.balance=a.balance+amt;
}

int main(){
    Account a1,a2;
    cout<<"enter details of account 1"<<endl;
    a1.getData();
    cout<<"enter details of account 2"<<endl;
    a2.getData();
    cout<<"Transferring amount 500 from account 1 to account 2"<<endl;
    a1.transfer(a2,500);
    cout<<"Transfer completed and updated account details are:"<<endl;
    a1.displayData();
    a2.displayData();
    return 0;
}