/*
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "DiceRoller.hpp"

using namespace std;

int main()
{
	string filename = "dice_part_2.txt";
	string outStatement;
	string line;

	ifstream fin = ifstream(filename);
	if (!fin.good())
	{
		cout << "Could not open file: " << filename << endl;
		return 0;
	}

	while (getline(fin, line))
	{
		istringstream ss(line);

		do
		{
			string word;
			ss >> word;

			int dPos = word.find_first_of("d");

			if (dPos < 0)
			{
				outStatement += word + " ";
			}
			else if (
				word.size() >= 3 && 
				dPos != (word.size() - 1) && 
				isdigit(word.at(dPos + 1)) && 
				isdigit(word.at(dPos - 1)))
			{
				outStatement +=  to_string(DiceRoller::roll(word)) + " ";
			}
			else
			{
				outStatement += word + " ";
			}

		} while (ss);

		outStatement += "\n";
	}

	cout << outStatement;
	
	fin.close();

	ofstream fout = ofstream(filename);
	fout << outStatement;
}
*/
