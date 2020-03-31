#include "person.hpp"

using namespace std;

Person::Person(
	int _id,
	string _name) :
m_id(_id),
m_name(_name)
{

}

int Person::getId()
{
	return m_id;
}

string Person::getName()
{
	return m_name;
}

void Person::setId(int _id)
{
	m_id = _id;
}

void Person::setName(string _name)
{
	m_name = _name;
}
