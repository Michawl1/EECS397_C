#pragma once
#include <string>

using namespace std;

class Student
{
private:
	int m_studentID;

	string m_name;

	int m_gradYear;

	string m_major;

	double m_gpa;

public:
	Student(
		int _studentID = 0,
		string _name = "",
		int _gradYear = 0,
		string _major = "",
		double _gpa = 0.0);
};