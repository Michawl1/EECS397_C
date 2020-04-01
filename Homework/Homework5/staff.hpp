#pragma once

#include <string>
#include "employee.hpp"

using namespace std;

class Staff : public Employee
{
private:
	string m_title;

public:
	Staff(
		int _id = 0,
		string _name = "",
		int _salary = 0,
		string _department = "",
		string _title = ""
	);

	string getTitle();

	void setTitle(string _title);
	
	bool works_with(Employee _other);

	string toString();
};