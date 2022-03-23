//simple function that receives char array as parameter
//and returns the length of the array
#include <iostream>
#include<string.h>

using namespace std;

int length(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[10];
    cout << "Enter a string: ";
    cin >> str;
    //strlen is a built-in function that returns the length of a string
    int len = strlen(str);
    cout << "Length of the string is: " << len << endl;
    cout<<"length of the string is: "<<length(str);
    return 0;
}