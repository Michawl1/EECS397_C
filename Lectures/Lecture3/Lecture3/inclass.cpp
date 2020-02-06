#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string fileName = "dice.txt";

	ifstream fin;
	fin.open(fileName);
	string line;
	fin >> line;

	cout << line << endl;
}