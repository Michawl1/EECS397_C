/*
 * @author Michael Thompson (mjt106
 * @date 1/30/2020
 * @file Homework1.cpp
 * @details this file outlines the code for homework 1
 */

#include <iostream>
#include <string>

using namespace std;

double doubleInput();
bool hasQuit();
void rootMath(double s_input, double e_input);

int main()
{
    cout << "Enter number you would like to square root" << endl;
    double s_input = doubleInput();
    cout << "Enter guess" << endl;
    double e_input = doubleInput();

    do
    {
        rootMath(s_input, e_input);
    } while (false);
}

//gets a valid double number from input stream and returns it
double doubleInput()
{
    double input = 0;

    while (!(cin >> input))
    {
        cout << "Please enter only numeric values" << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }

    return input;
}

// This does the root math for the project
void rootMath(
    double _s,
    double _e)
{
    double guess = 2.0 / _s;

    double a = 0;
    double b = 0;

    bool condition = true;

    double iter1 = DBL_MAX;
    double iter2 = DBL_MAX;

    while (condition)
    {
        iter2 = iter1;
        iter1 = guess;

        a = guess / 2.0;
        b = 3 - (_s * guess * guess);
        if (abs(guess - (a * b)) < _e)
        {
            condition = false;
        }

        guess = a * b;

        if (abs(iter2 - iter1) < abs(iter1 - guess))
        {
            cout << "Error" << endl;
            return;
        }
    }

    cout << guess * _s << endl;
}