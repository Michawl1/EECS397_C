
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "DiceRoller.hpp"

using namespace std;

int main()
{
	string filename = "dice_part_1.txt";
	string outfile = "dice_out_1.txt";

	ifstream fin = ifstream(filename);
	if (!fin.good())
	{
		cout << "Could not open file: " << filename << endl;
		return 0;
	}

	ofstream fout;
	fout.open(outfile);

	string line;
	
	while (getline(fin, line))
	{
		cout << line << " = ";
		fout << line << " = ";

		int result = DiceRoller::roll(line);

		cout << result << endl;
		fout << result << endl;
	}
}


