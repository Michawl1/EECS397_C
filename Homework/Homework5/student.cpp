#include <string>
#include "student.hpp"

using namespace std;

Student::Student(
	int _id,
	string _name,
	int _graduationYear,
	string _major,
	double _gpa) :
Person(_id, _name),
m_graduationYear(_graduationYear),
m_major(_major),
m_gpa(_gpa)
{

}

int Student::getGraduationYear()
{
	return m_graduationYear;
}

string Student::getMajor()
{
	return m_major;
}

double Student::getGpa()
{
	return m_gpa;
}

void Student::setGraduationYear(int _graduationYear)
{
	m_graduationYear = _graduationYear;
}

void Student::setMajor(string _major)
{
	m_major = _major;
}

void Student::setGpa(double _gpa)
{
	m_gpa = _gpa;
}