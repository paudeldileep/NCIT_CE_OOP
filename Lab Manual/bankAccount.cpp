#include<iostream>
#include<string.h>
// #include<conio.h>
// #include<stdlib.h>
using namespace std;

int i=0;
float x;

class person{

	int an;
   char name[20];
   float balance;
   float x;

   public:
   	person();
   	void openAcc(int);
      void deposit();
      void withdraw();
      void display(int);
      int putId();
};
person::person(){
	an=0;
   strcpy(name,"");
   balance=0;


}

void person::openAcc(int n){
	cout<<"enter name and amount to deposit of Account "<<n<<" :";
   cin>>name>>balance;
   an=100+n;
   cout<<"New Account created successfully with following details:"<<endl;
   display(n-1);
}

void person::deposit(){
	cout<<"enter amount to deposit:";
   cin>>x;
   balance+=x;
   cout<<"amount deposited succesfully!!"<<endl;
}

void person::withdraw(){
	cout<<"enter amount to withdraw:";
   cin>>x;
   if(balance>=x){
   	balance-=x;
   	cout<<"amount withdrawn succesfully!!"<<endl;
   }
   else{
   	cout<<"Insufficient balance!"<<endl;
   }
}

int person::putId(){
	return an;
}

void person::display(int n){
	cout<<"Account "<<(n+1)<<endl;
	cout<<" Name: "<<name<<"\n Acc No: "<<an<<"\n Available balance:"<<balance<<endl;
}


int main(){
	person p[5];

   int option,choice,j,flag;

   do{

   	cout<<"1.open account 2.deposit 3.withdraw 4.display 5.exit"<<endl;
      cin>>option;

  	 switch(option){

    	case 1:
            if(i<10){
					p[i].openAcc(i+1);
            	i++;
               break;
            }
            else{
            	cout<<"Maximum number of Accounts created! Sorry."<<endl;
               break;
            }

       case 2:
              cout<<"Enter the account you want to deposit to:(accnt number): ";
               cin>>choice;
               j=0;
               while(j<10){
                      if(choice==p[j].putId()){

                     	int a=choice-101;
                        p[a].deposit();
                        flag=1;
                        break;
                     }
                     j++;
               }
               if(flag!=1){
                    cout<<"The account couldn't found!"<<endl;

               }

                 break;
       case 3:
               cout<<"Enter from which account you want to withdraw:(accnt number): ";
               cin>>choice;
               j=0;
               while(j<10){
                      if(choice==p[j].putId()){
                     	int a=choice-101;
                        p[a].withdraw();
                        flag=1;
                        break;
                     }
                     j++;
               }
               if(flag!=1){
                    cout<<"The account couldn't be found!"<<endl;

               }
                 break;

       case 4:
               cout<<"Enter which account details you want to see:(accnt number): ";
               cin>>choice;
               j=0;
               while(j<10){
                      if(choice==p[j].putId()){
                      	//cout<<choice<<" "<<p[6].putId()<<p[1].putId()<<endl;
                     	int a=choice-101;
                        p[a].display(a);
                        flag=1;
                        break;
                     }
                     //cout<<"j++";
                     j++;
               }
               if(flag!=1){
                    cout<<"The account couldn't found!"<<endl;

               }
   /*
               for (j=0;j<10;j++){
                  	if(choice==p[j].putId()){
                     	int a=choice-101;
                        p[a].display(a);
                        break;
                     }
                     else{
                     	cout<<"The account couldn't found!"<<endl;
                         break;
                     }
                  }
                */
                  break;
       case 5:
       	exit(0);
       case 6:
       			cout<<"invalid choice,enter a valid choice:"<<endl;


    }
   }
   while(option!=5 && option<7);
   //getch();
   return 0;


 }