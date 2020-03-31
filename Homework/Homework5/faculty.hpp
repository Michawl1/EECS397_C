#pragma once

#include <string>
#include "employee.hpp"

using namespace std;

class Faculty : public Employee
{
private:
	string m_position;

	string m_researchFocus;

public:
	Faculty(
		int _id = 0,
		string _name = "",
		int _salary = 0,
		string _department = "",
		string _position = "",
		string _researchFocus = "");

	string getPosition();
	string getResearchFocus();

	void setPosition(string _position);
	void setResearchFocus(string _researchFocus);

	bool works_together(Employee _other);
};