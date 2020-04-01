#pragma once

#include <string>
#include "person.hpp"

using namespace std;

class Employee : public Person
{
private:
	int m_salary;

	string m_department;

public:
	Employee(
		int _id = 0,
		string _name = "",
		int _salary = 0,
		string _department = "");

	int getSalary();
	string getDepartment();

	void setSalary(int _salary);
	void setDepartment(string _department);

	bool works_with(Employee _other);
};