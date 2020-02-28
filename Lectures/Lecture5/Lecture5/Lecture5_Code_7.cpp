/*

#include <iostream>

using namespace std;
const int MAX = 3;

int main() {
    int  var[MAX] = { 10, 100, 200 }; //array of integers
    int* ptr[MAX]; //array of pointer (empty at the beginning)

    for (int i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; // assign the address of integer.
    }

    //now ptr has adresses of each element in the array
    //this is an array of pointers
    for (int i = 0; i < MAX; i++) {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl; //to access the elements, we need to dereference
    }

    return 0;
}

*/