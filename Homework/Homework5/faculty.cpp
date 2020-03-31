#include <string>
#include <typeinfo>
#include "employee.hpp"
#include "faculty.hpp"
#include "staff.hpp"

using namespace std;

Faculty::Faculty(
	int _id,
	string _name,
	int _salary,
	string _department,
	string _position,
	string _researchFocus) :
Employee(_id, _name, _salary, _department),
m_position(_position),
m_researchFocus(_researchFocus)
{

}

string Faculty::getPosition()
{
	return m_position;
}

string Faculty::getResearchFocus()
{
	return m_researchFocus;
}

void Faculty::setPosition(string _position)
{
	m_position = _position;
}

void Faculty::setResearchFocus(string _researchFocus)
{
	m_researchFocus = _researchFocus;
}

bool Faculty::works_together(Employee _other)
{
	string s = typeid(_other).name();

	if (dynamic_cast<Faculty*>(_other) == nullptr)
	{

	}

	if (s == "class Faculty")
	{
		if (_other.getDepartment() == this->getDepartment())
		{
			return true;
		}
	}
	else
	{
		if (_other.getDepartment() == "")
		{
			return true;
		}
	}
	return false;
}