#include "DiceRoller.hpp"
#include <vector>
#include <ctime>

using namespace std;

int DiceRoller::makeM(vector<char> _before)
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

int DiceRoller::makeN(vector<char> _before)
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

int DiceRoller::makeA(vector<char> _after)
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

int DiceRoller::makeB(vector<char> _after)
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

int DiceRoller::vectorToInt(vector<char> _in)
{
	string val = "";

	for (int i = 0; i < _in.size(); i++)
	{
		val += _in.at(i);
	}

	return stoi(val);
}

int DiceRoller::roll(string _statement)
{
	int sum = 0;

	int M = 1;
	int N = 0;
	int A = 0;
	int B = 1;
		
	vector <char> before;
	vector <char> after;
	bool dFlag = false;

	for (int i = 0; i < _statement.length(); i++)
	{
		if (_statement.at(i) == 'd')
		{
			dFlag = true;
			i++;
		}

		if (!dFlag)
		{
			before.push_back(_statement.at(i));
		}
		else
		{
			after.push_back(_statement.at(i));
		}

	}

	M = DiceRoller::makeM(before);
	N = DiceRoller::makeN(before);
	A = DiceRoller::makeA(after);
	B = DiceRoller::makeB(after);

	for (int i = 0; i < N; i++)
	{
		srand((unsigned)time(0));
		sum += M * ((rand() % A) + 1 + B);
	}

	return sum;
}