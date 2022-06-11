//pointer to array of objects
#include <iostream>
using namespace std;

class Item{
    private:
        int code;
        float price;
    public:
        void getData(int c, float p){
            code = c;
            price = p;
        }
        void print(){
            cout << "Code: " << code << endl;
            cout << "Price: " << price << endl;
        }
};

int main(){
    int size;
    cout << "Enter no.of items: ";
    cin >> size;
    Item *p = new Item[size];
    Item *q = p;
    for (int i = 0; i < size; i++){
        cout << "Enter code and price of item " << i+1 << ": ";
        int c;
        float price;
        cin >> c >> price;
        p->getData(c, price);
        p++;
    }
    for(int i = 0; i < size; i++){
        cout<<"Item "<<i+1<<":"<<endl;
        q->print();
        q++;
    }

    delete [] p;

    return 0;
}   