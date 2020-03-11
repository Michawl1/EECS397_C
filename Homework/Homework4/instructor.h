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

	int getInstructorID();

	string getName();

	string getDepartment();

	void setInstructorID(int _instructorID);

	void setName(string _name);

	void setDepartment(string _department);
};