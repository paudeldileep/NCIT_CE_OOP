//char array to string type conversion
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
};

int main(){
    String s1="hello";
    String s2="world";
    s1.display();
    s2.display();
    return 0;
}