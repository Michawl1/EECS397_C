#include "research_assistant.hpp"
#include "student.hpp"
#include "staff.hpp"

ResearchAssistant::ResearchAssistant(
	string _area,
	string _title,
	string _department,
	int _salary,
	int _id,
	string _name) :
Student(_id, _name),
Staff(_id, _name, _salary, _department, _title),
m_area(_area)
{

}


ResearchAssistant::ResearchAssistant(
	string _area,
	string _major,
	double _gpa,
	int _gradYear,
	int _id,
	string _name) :
Student(_id, _name, _gradYear, _major, _gpa),
Staff(_id, _name),
m_area(_area)
{

}

string ResearchAssistant::toString()
{
	return "";
		/*
		to_string(Student::getId()) + ": " +
		Student::getName() + ". " +
		Student::get
		*/
}