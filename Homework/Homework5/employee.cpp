#include <string>
#include "employee.hpp"

using namespace std;

Employee::Employee(
	int _id,
	string _name,
	int _salary,
	string _department) :
Person(_id, _name),
m_salary(_salary),
m_department(_department)
{

}

int Employee::getSalary()
{
	return m_salary;
}

string Employee::getDepartment()
{
	return m_department;
}

void Employee::setSalary(int _salary)
{
	m_salary = _salary;
}

void Employee::setDepartment(string _department)
{
	m_department = _department;
}

bool Employee::works_with(Employee _other)
{
	return _other.getDepartment() == this->getDepartment();
}