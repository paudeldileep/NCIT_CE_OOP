//BANK ACCOUNT simulation for single customer
#include<iostream>
#include<string>
using namespace std;


class bankAccount{
        string name;
        int acc_number;
        float balance;

        public:
            bankAccount();
            bankAccount(string n,int num,float b);
            void deposit();
            void withdraw();
            void display();
};

bankAccount::bankAccount(){
    name="";
    acc_number=0;
    balance=0;
}

bankAccount::bankAccount(string n,int num,float b){
    name=n;
    acc_number=num;
    balance=b;
}

void bankAccount::deposit(){
    float amount;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    balance+=amount;
}

void bankAccount::withdraw(){
    float amount;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    balance-=amount;
}

void bankAccount:: display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Account number: "<<acc_number<<endl;
    cout<<"Balance: "<<balance<<endl;
}

int main(){

    string name;
    int acc_number=101;
    float balance;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter balance: ";
    cin>>balance;
    bankAccount b1(name,acc_number,balance);
    cout<<"bank account opened successfully, details are: "<<endl;
    b1.display();
    int choice;
    do
    {
            cout<<"----Options-----"<<endl;
         cout<<"\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice){
                case 1:
                    b1.deposit();
                    break;
                case 2:
                    b1.withdraw();
                    break;
                case 3:
                    b1.display();
                    break;
                case 4:
                    break;
                default:
                    cout<<"Invalid choice\n";
            }
        /* code */
    } while (choice!=4);

    return 0;
    

}