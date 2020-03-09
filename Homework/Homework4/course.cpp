#include "course.h"
#include "student.h"
#include <vector>

using namespace std;

Course::Course(
	string _title = "",
	string _department = "",
	int _number = 0,
	string _building = "",
	int _roomNumber = 0,
	string _instructorName = 0) :
m_title(_title),
m_department(_department),
m_number(_number),
m_building(_building),
m_roomNumber(_roomNumber),
m_instructorName(_instructorName),
m_enrolled(vector<Student>())
{

}

void Course::addStudents(
	vector<Student> _studentsToAdd)
{
	for (Student student : _studentsToAdd)
	{
		if (find(
				m_enrolled.begin(),
				m_enrolled.end(),
				student) 
			== m_enrolled.end())
		{
			m_enrolled.push_back(student);
		}
	}
}

bool Course::dropStudent(
	Student _studentToRemove)
{

}

void Course::addInstructor(
	Instructor _instructorToAdd)
{

}

void Course::printStudents()
{

}