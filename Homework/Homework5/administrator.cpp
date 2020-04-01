#include <vector>
#include <iostream>
#include "administrator.hpp"

using namespace std;

Administrator::Administrator(
	string _department,
	int _salary,
	int _id,
	string _name) :
Staff(_id, _name, _salary, _department, "Department Administrator"),
Faculty(_id, _name, _salary, _department, "Department Administrator", _department),
m_students(vector<Student>()),
m_researchAssistants(vector<ResearchAssistant>()),
m_faculties(vector<Faculty>()),
m_staffs(vector<Staff>())
{

}

void Administrator::addStudent(Student _student)
{
	m_students.push_back(_student);
}

void Administrator::addResearcher(ResearchAssistant _researchAssistant)
{
	m_researchAssistants.push_back(_researchAssistant);
}

void Administrator::addFaculty(Faculty _faculty)
{
	m_faculties.push_back(_faculty);
}

void Administrator::addStaff(Staff _staff)
{
	m_staffs.push_back(_staff);
}

void Administrator::print()
{
	for (Student s : m_students)
	{
		cout << s.toString() << endl;
	}

	for (ResearchAssistant r : m_researchAssistants)
	{
		cout << r.toString() << endl;
	}

	for (Faculty f : m_faculties)
	{
		cout << f.toString() << endl;
	}

	for (Staff s : m_staffs)
	{
		cout << s.toString() << endl;
	}
}