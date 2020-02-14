#include <string>
#include <vector>

using namespace std;

class DiceRoller
{
private:
	/*
	@details generates the M value from the given vector
	@returns an int with the M value
	*/
	static int makeM(vector<char> _before);

	/*
	@details generates the N value from the given vector
	@returns an int with the N value
	*/
	static int makeN(vector<char> _before);

	/*
	@details generates the A value from the given vector
	@returns an int with the A value
	*/
	static int makeA(vector<char> _after);

	/*
	@details generates the B value from the given vector
	@returns an int with the B value (signed)
	*/
	static int makeB(vector<char> _after);

	/*
	@details turns a character vector full of digits into an int
	@returns the int value of the character vector
	*/
	static int vectorToInt(vector<char> _in);

public:
	/*
	@details rolls the dice with the given string input
	@param[in] _statement: the statement in the m*nda+b format
	@returns the value of the roll
	*/
	static int roll(string _statement);
};