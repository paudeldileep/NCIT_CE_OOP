//string concatenation
#include <iostream>
#include <string.h>
using namespace std;

class String{
    char *str;
    int len;
    public:
    String(){
        len=0;
        str=0; //null string
    }
    String(char *s){
        len=strlen(s);
        str=new char[len+1];
        strcpy(str,s);
    }
    void display(){
        cout<<str<<endl;
    }
    String operator+(String s){
        String temp;
        temp.len=len+s.len;
        temp.str=new char[temp.len+1];
        strcpy(temp.str,str);
        strcat(temp.str,s.str);
        return temp;
    }
};
int main(){
    String s1="hello";
    String s2="world";
    cout<<"s1 is ";
    s1.display();
    cout<<"s2 is ";
    s2.display();
    String s3;
    s3=s1+s2;
    cout<<"s3 is ";
    s3.display();
    return 0;
}