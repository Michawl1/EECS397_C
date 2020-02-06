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
double stringToDouble(string _input);
void rootMath(double s_input, double e_input);

int main()
{
    cout << "Enter number you would like to square root (press q to quit)" << endl;
    double s_input = doubleInput();
    if (s_input < 0)
    {
        return 0;
    }

    cout << "Enter guess (press q to quit)" << endl;
    double e_input = doubleInput();
    if (e_input < 0)
    {
        return 0;
    }
   
    rootMath(s_input, e_input);

    cout << endl;
    cout << endl;
    main();
}

//gets a double input or a q to quit
double doubleInput()
{
    string inputString;
    double input = -1;

    cin >> inputString;

    if (inputString == "q")
    {
        return -1;
    }
    else
    {
        input = stringToDouble(inputString);
        if (input >= 0)
        {
            return input;
        }
        else
        {
            cout << "Please enter only positive numbers (press q to quit)" << endl;
            return doubleInput();
        }
    }
}

//turns a string into a double, returns -1 if there is a failure
double stringToDouble(string _input)
{
    int dot_count = 0;
    for (int i = 0; i < _input.length(); i++)
    {
        if (_input.at(i) == '.')
        {
            dot_count++;
        }
        else if (!isdigit(_input.at(i)))
        {
            return -1;
        }
        
        if (dot_count > 1)
        {
            return -1;
        }
    }
    return stod(_input);
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

    cout << "Solution: " << guess * _s << endl;
}