#pragma once

#include <string>
#include "person.hpp"

using namespace std;

class Student : public Person
{
private:
	int m_graduationYear;

	string m_major;

	double m_gpa;

public:
	Student(
		int _id = 0,
		string _name = "",
		int _graduationYear = 0,
		string _major = "",
		double _gpa = 0.0);


	int getGraduationYear();
	string getMajor();
	double getGpa();

	void setGraduationYear(int _graduationYear);
	void setMajor(string _major);
	void setGpa(double _gpa);
};