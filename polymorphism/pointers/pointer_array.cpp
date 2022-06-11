// pointer to array of int numbers
#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int *p = new int[size];
    for (int i = 0; i < size; i++){
        cout << "Enter element " << i << ": ";
        cin >> p[i];
    }
    cout << "Array: ";
    for (int i = 0; i < size; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    delete [] p;
    return 0;

}