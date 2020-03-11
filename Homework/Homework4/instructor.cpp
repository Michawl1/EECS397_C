#include "instructor.h"

Instructor::Instructor(
	int _instructorID,
	string _name,
	string _department) :
m_instructorID(_instructorID),
m_name(_name),
m_department(_department)
{

}

int Instructor::getInstructorID()
{
	return m_instructorID;
}

string Instructor::getName()
{
	return m_name;
}

string Instructor::getDepartment()
{
	return m_department;
}

void Instructor::setInstructorID(int _instructorID)
{
	m_instructorID = _instructorID;
}

void Instructor::setName(string _name)
{
	m_name = _name;
}

void Instructor::setDepartment(string _department)
{
	m_department = _department;
}