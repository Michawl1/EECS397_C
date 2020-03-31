#pragma once

#include <string>

using namespace std;

class Person
{
private:
	int m_id;

	string m_name;

public:
	Person(
		int _id = 0,
		string _name = "");

	int getId();
	string getName();

	void setId(int _id);
	void setName(string _name);
};