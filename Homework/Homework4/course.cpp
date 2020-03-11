#include "course.h"
#include "student.h"
#include <vector>
#include <iostream>

using namespace std;

Course::Course(
	string _title,
	string _department,
	int _number,
	string _building,
	int _roomNumber) :
m_title(_title),
m_department(_department),
m_number(_number),
m_building(_building),
m_roomNumber(_roomNumber),
m_instructorName(0),
m_enrolled(vector<Student>())
{

}

string Course::getTitle()
{
	return m_title;
}

string Course::getDepartment()
{
	return m_department;
}

int Course::getNumber()
{
	return m_number;
}

int Course::getRoomNumber()
{
	return m_roomNumber;
}

Instructor Course::getInstructorName()
{
	return m_instructorName;
}

void Course::setTitle(string _title)
{
	m_title = _title;
}

void Course::setDepartment(string _department)
{
	m_department = _department;
}

void Course::setNumber(int _number)
{
	m_number = _number;
}

void Course::setRoomNumber(int _roomNumber)
{
	m_roomNumber = _roomNumber;
}

void Course::setInstructorName(Instructor _instructorName)
{
	m_instructorName = _instructorName;
}

void Course::addStudents(
	vector<Student> _studentsToAdd)
{
	bool foundFlag;

	for (Student student : _studentsToAdd)
	{
		foundFlag = false;

		for (Student alreadyEnrolled : m_enrolled)
		{
			if (alreadyEnrolled.equals(student))
			{
				foundFlag = true;
			}
		}

		if (!foundFlag)
		{
			m_enrolled.push_back(student);
		}
	}
}

bool Course::dropStudent(
	Student _studentToRemove)
{
	for (int i = 0; i < m_enrolled.size(); i++)
	{
		Student temp = m_enrolled[i];

		if (temp.getStudentID() == _studentToRemove.getStudentID())
		{
			m_enrolled.erase(m_enrolled.begin() + i);
			return true;
		}
		
	}

	return false;
}

void Course::addInstructor(
	Instructor _instructorToAdd)
{
	this->setInstructorName(_instructorToAdd);
}

void Course::printStudents()
{
	for (int i = 0; i < m_enrolled.size(); i++)
	{
		cout << m_enrolled[i].printString() << endl;
	}
}