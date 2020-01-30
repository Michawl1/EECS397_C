/*
 * @author Michael Thompson (mjt106
 * @date 1/30/2020
 * @file Homework1.cpp
 * @details this file outlines the code for homework 1
 */

#include <iostream>

using namespace std;

bool isNumeric(string _input);

int main()
{
    string rootInput;
    string iterationInput;

    cout << "Enter the number you'd like to square root: " << endl;
    cin >> rootInput;
    while (!isNumeric(rootInput))
    {
        cout << "Please enter a only a numeric value" << endl;
        cin >> rootInput;
    }

    cout << "Enter the amount of iteration you'd like to estimate: " << endl;
    cin >> iterationInput;
    while (!isNumeric(iterationInput))
    {
        cout << "Please enter only a numeric value" << endl;
        cin >> iterationInput;
    }
    
}

bool isNumeric(string _input)
{
    string::const_iterator it = _input.begin();
    while (it != _input.end() && isdigit(*it)) ++it;
    return !_input.empty() && it == _input.end();
}