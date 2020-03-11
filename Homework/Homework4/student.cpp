#include "student.h"

using namespace std;

Student::Student(
	int _studentID,
	string _name,
	int _gradYear,
	string _major,
	double _gpa) :
m_studentID(_studentID),
m_name(_name),
m_gradYear(_gradYear),
m_major(_major),
m_gpa(_gpa)
{

}

int Student::getStudentID()
{
	return m_studentID;
}

string Student::getName()
{
	return m_name;
}

int Student::getGradYear()
{
	return m_gradYear;
}

string Student::getMajor()
{
	return m_major;
}

double Student::getGpa()
{
	return m_gpa;
}

void Student::setStudentID(int _studentID)
{
	m_studentID = _studentID;
}

void Student::setName(string _name)
{
	m_name = _name;
}

void Student::setGradYear(int _gradYear)
{
	m_gradYear = _gradYear;
}

void Student::setMajor(string _major)
{
	m_major = _major;
}

void Student::setGpa(double _gpa)
{
	m_gpa = _gpa;
}

string Student::printString()
{
	return
		std::to_string(m_studentID) + " " + 
		m_name + " " + 
		std::to_string(m_gradYear) + " " + 
		m_major + " " + 
		std::to_string(m_gpa);
		
}

bool Student::equals(Student _other)
{
	return
		(m_studentID == _other.getStudentID()) &&
		(m_name == _other.getName()) &&
		(m_gradYear == _other.getGradYear()) &&
		(m_major == _other.getMajor()) &&
		(m_gpa == _other.getGpa());
}