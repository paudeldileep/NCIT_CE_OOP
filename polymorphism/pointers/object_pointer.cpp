// pointer to object
#include <iostream>
using namespace std;

class Demo{
    public:
        int a;
        void getData(int x){
            a = x;
        }
        void print(){
            cout << "a = " << a << endl;
        }
};

int main(){
    Demo d;
    Demo *p = &d;
    p->getData(10);
    p->print();
    return 0;

}