#pragma once
#include <string>
#include <vector>

#include "student.h"
#include "instructor.h"

using namespace std;

class Course
{
private:
	string m_title;

	string m_department;

	string m_building;

	int m_number;

	int m_roomNumber;

	string m_instructorName;

	vector<Student> m_enrolled;

public:
	Course(
		string _title = "",
		string _department = "",
		int _number = 0,
		string _building = "",
		int _roomNumber = 0,
		string _instructorName = 0);

	void addStudents(
		vector<Student> _studentsToAdd);

	bool dropStudent(
		Student _studentToRemove);

	void addInstructor(
		Instructor _instructorToAdd);

	void printStudents();
};