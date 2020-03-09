#include "student.h"

Student::Student(
	int _studentID = 0,
	string _name = "",
	int _gradYear = 0,
	string _major = "",
	double _gpa = 0.0) :
m_studentID(_studentID),
m_name(_name),
m_gradYear(_gradYear),
m_major(_major),
m_gpa(_gpa)
{

}