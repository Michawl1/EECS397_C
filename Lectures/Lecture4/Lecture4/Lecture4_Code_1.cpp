/*
// Lecture4_Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "functions.h"

//int calcSum(int, int); // function prototype
//void print(string);
//void print(void);
/*
//double sqrt(double);

double total;
int value = 25;
const double preserved = 30;

int main()
{
    int sum = calcSum(7, 5); //function call

    cout << "Sum is: " << sum;

    print("\n");
    print("Orhan");

    print("\n");
    print();

    print("\n");
    double x = sqrt(64);
    cout << "\n Sqrt is: " << x;

    //preserved = 200; // error because constant number
    double useNum = preserved + 100;
}

double sqrt(double num) {
    //int iterations = 1000;
    //iterations = 50;

    if (num == 0.0) {//Skip out on complex numbers if the user enters "-0".
        std::cout << "The square root of 0 is 0.";
        return 0;
    }
    else {
        //Check if input is negative
        double abs_number; //absolute value of the number
        if (num < 0) {
            abs_number = -num;//Could also say a = abs(a) and not have the if-statement, but want to do everything arithmetically here.
        }
        else {
            abs_number = num;
        }

        //Compute the square root using the "Babylonian method",
        // which was actually written down by Hero of Alexandria and has no known connection to Babylon.
        double guess = abs_number / 2;
        double r;
        for (int i = 0; i < iterations; i++) {
            r = abs_number / guess;
            guess = (guess + r) / 2;
        }
        return guess;
    }

}
//function definition
int calcSum(int a, int b) {
    return a + b;
}

void print(string msg) {
    cout << msg;
}

void print() {
    cout << "Hello";
}

*/