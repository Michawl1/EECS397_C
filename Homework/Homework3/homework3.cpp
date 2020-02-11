#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int makeM(vector<char> _before);
int makeN(vector<char> _before);
int makeA(vector<char> _after);
int makeB(vector<char> _after);

int vectorToInt(vector<char> _in);

int roll(
	int _m,
	int _n,
	int _a,
	int _b);

int main()
{
	string filename = "dice_part_1.txt";

	ifstream fin;
	fin.open(filename);
	string line;

	int M = 1;
	int N = 0;
	int A = 0;
	int B = 1;
	
	while (getline(fin, line))
	{
		cout << line << endl;

		vector <char> before;
		vector <char> after;
		bool dFlag = false;

		for (int i = 0; i < line.length(); i++)
		{
			if (line.at(i) == 'd')
			{
				dFlag = true;
				i++;
			}

			if (!dFlag)
			{
				before.push_back(line.at(i));
			}
			else
			{
				after.push_back(line.at(i));
			}

		}

		M = makeM(before);
		N = makeN(before);
		A = makeA(after);
		B = makeB(after);

		cout << M << " " << N << " " << A << " " << B << endl;

		roll(M, N, A, B);
	}
}

int makeM(vector<char> _before)
{
	vector<char> m;
	bool starFlag = false;

	for (int i = 0; i < _before.size(); i++)
	{
		if (_before.at(i) == '*')
		{
			starFlag = true;
			break;
		}

		m.push_back(_before.at(i));
	}

	if (starFlag)
	{
		return vectorToInt(m);
	}
	else
	{
		return 1;
	}
}

int makeN(vector<char> _before)
{
	vector<char> n;

	for (int i = 0; i < _before.size(); i++)
	{
		if (_before.at(i) == '*')
		{
			n.clear();
			i++;
		}
		
		n.push_back(_before.at(i));
	}

	return vectorToInt(n);
}

int makeA(vector<char> _after)
{
	vector<char> a;

	for (int i = 0; i < _after.size(); i++)
	{
		if (_after.at(i) == '+' || _after.at(i) == '-')
		{
			break;
		}

		a.push_back(_after.at(i));
	}

	return vectorToInt(a);
}

int makeB(vector<char> _after)
{
	vector<char> b;
	bool operatorFlag = false;

	for (int i = 0; i < _after.size(); i++)
	{
		if (_after.at(i) == '+' || _after.at(i) == '-')
		{
			b.clear();
			operatorFlag = true;
		}
		b.push_back(_after.at(i));
	}

	if (operatorFlag)
	{
		return vectorToInt(b);
	}
	else
	{
		return 0;
	}
}

int vectorToInt(vector<char> _in)
{
	string val = "";

	for (int i = 0; i < _in.size(); i++)
	{
		val += _in.at(i);
	}

	return stoi(val);
}

int roll(
	int _m,
	int _n,
	int _a,
	int _b)
{
	return 0;
}