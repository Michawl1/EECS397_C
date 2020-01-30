/*
 * @author Michael Thompson
 * @date 1/30/2020
 */

#include <iostream>
#include <string>

using namespace std;

bool isNumeric(string _input);

int main()
{
    double x = 0;
    double guess = 0;
    double r = 0;

    string xInput;

    cout << "Enter root: " << endl;
    cin >> xInput;
    while (!isNumeric(xInput))
    {
        cout << "Enter only numbers: " << endl;
        cin >> xInput;
    }

    x = (double)stoi(xInput);

    guess = x / 2.0;

    for (int i = 0; i < 200; i++)
    {
        r = x / guess;
        guess = (guess + r) / 2.0;
    }

    cout << guess << endl;   
}

bool isNumeric(string _input)
{
    string::const_iterator it = _input.begin();
    while (it != _input.end() && isdigit(*it)) ++it;
    return !_input.empty() && it == _input.end();
}