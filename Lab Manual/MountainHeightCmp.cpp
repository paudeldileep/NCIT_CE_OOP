#include<iostream>
#include<string.h>
using namespace std;

class Mountain{
	private:
		char name[20];
		int height;
		char loc[20];
	public:
		Mountain(const char *n,int h,const char *l);
		void DisplayInf();
		void CmpHeight(Mountain M);	
};

Mountain::Mountain(const char *n,int h,const char *l){
	strcpy(name,n);
	height=h;
	strcpy(loc,l);
}

void Mountain::DisplayInf(){
	cout<<"Name:"<<name<<", Height:"<<height<<", Location:"<<loc<<endl;
}

void Mountain::CmpHeight(Mountain M){
	if (this->height>M.height){
		cout<<"Mountain "<<this->name<<" has greater height. And its information is:"<<endl;
		this->DisplayInf();
	}
	else{
		cout<<"Mountain "<<M.name<<" has greater height. And its information is:"<<endl;
		M.DisplayInf();
	}
	
}

int main(){
	char n[20],l[20];
	int h;
	cout<<"Enter mountain name,height,location:";
	cin>>n>>h>>l;
	Mountain M1(n,h,l);
	cout<<"Enter second mountain name,height,location:";
	cin>>n>>h>>l;
	Mountain M2(n,h,l);
	cout<<"--Given Mountains details are--"<<endl;
	M1.DisplayInf();
	M2.DisplayInf();
	M1.CmpHeight(M2);
	return 0;
	
}
