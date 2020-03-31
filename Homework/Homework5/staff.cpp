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

bool Staff::works_together(Employee _other)
{

}