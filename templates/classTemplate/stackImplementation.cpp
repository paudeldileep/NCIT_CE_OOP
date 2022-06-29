#include<iostream>
#include<conio.h>
#define max 5

using namespace std;

template<class T>
class Stack{
  T stk[max];
  int top;
  public:
  	Stack(){
   	top=-1;
   }
  	void push(T data){
     if(top==max-1){
     	cout<<"stack is full"<<endl;
     }
     else{
     	top++;
      stk[top]=data;
      cout<<"data "<<data<<" pushed to stack!"<<endl; 
     }
   }
   void pop(){
   	if(top==-1)
      	cout<<"stack is empty!"<<endl;
   	else{
      	int tmp=stk[top];
         top--;
         cout<<"data "<<tmp<<" is popped out!"<<endl;
      }
   }
   void show(){
   	for(int i=top;i>=0;i--){
      	cout<<"stk["<<i<<"]:"<<stk[i]<<endl;
      }
   }

};
int main(){
	Stack<int>s1;
   s1.push(2);
   s1.push(3);
   s1.push(5);
   s1.push(4);
   s1.show();
   s1.pop();
   s1.pop();
   s1.show();
   s1.push(10);
   s1.show();
   return 0;


}
