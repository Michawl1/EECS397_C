#include <string>
#include "staff.hpp"

using namespace std;

Staff::Staff (
	int _id,
	string _name,
	int _salary,
	string _department,
	string _title) :
Employee(_id, _name, _salary, _department),
m_title(_title)
{

}

string Staff::getTitle()
{
	return m_title;
}

void Staff::setTitle(string _title)
{
	m_title = _title;
}

bool Staff::works_with(Employee _other)
{
	if (_other.getDepartment() == this->getDepartment())
	{
		return true;
	}

	return false;
}

string Staff::toString()
{
	string retString = Employee::toString();

	if (m_title != "")
	{
		retString += ", Title: " + m_title;
	}

	return retString;
		
}