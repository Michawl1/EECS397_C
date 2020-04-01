#pragma once

#include <string>
#include <vector>

#include "staff.hpp"
#include "faculty.hpp"
#include "student.hpp"
#include "research_assistant.hpp"
#include "faculty.hpp"
#include "staff.hpp"

using namespace std;

class Administrator : public Staff, public Faculty
{
private:
	vector<Student> m_students;
	vector<ResearchAssistant> m_researchAssistants;
	vector<Faculty> m_faculties;
	vector<Staff> m_staffs;

public:
	Administrator(
		string _department = "",
		int _salary = 0,
		int _id = 0,
		string _name = ""
	);

	void addStudent(Student _student);
	void addResearcher(ResearchAssistant _researchAssistant);
	void addFaculty(Faculty _faculty);
	void addStaff(Staff _staff);

	void print();
};