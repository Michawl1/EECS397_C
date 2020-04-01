#pragma once

#include <string>
#include "student.hpp"
#include "staff.hpp"

using namespace std;

class ResearchAssistant : public Student, public Staff
{
private:
	string m_area;

public:
	ResearchAssistant(
		string _area = "",
		string _title = "",
		string _department = "",
		int _salary = 0,
		int _id = 0,
		string _name = ""
	);

	ResearchAssistant(
		string _area = "",
		string _major = "",
		double _gpa = 0.0,
		int _gradYear = 0,
		int _id = 0,
		string _name = ""
	);

	string toString();
};