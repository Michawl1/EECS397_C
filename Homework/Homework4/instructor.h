#pragma once
#include <string>

using namespace std;

class Instructor
{
private:
	int m_instructorID;

	string m_name;

	string m_department;

public:
	Instructor(
		int _instructorID = 0,
		string _name = "",
		string _department = "");
};