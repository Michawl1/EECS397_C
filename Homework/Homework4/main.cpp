#include <iostream>
#include <vector>

#include "course.h"
#include "instructor.h"
#include "student.h"

int main(const int argc, const char** argv) {
	//std::rand() % 100000 creates a random integer
	Instructor ozguner = Instructor(std::rand() % 100000, "Orhan Ozguner", "Computer Science");
	Instructor koyuturk = Instructor(std::rand() % 100000, "Mehmet Koyuturk", "Computer Science");

	Course cpp = Course("C/C++ Programming", "EECS", 297, "Bingham", 140);

	Student tom = Student(std::rand() % 100000, "Thomas Shkurti", 2024, "Computer Science", 4.0);
	Student ammar = Student(std::rand() % 100000, "Ammar Nahari", 2023, "Electrical Engineering", 3.0);
	Student ash = Student(std::rand() % 100000, "Ashley Space", 1977, "Philosphy", 3.5);
	Student iayn = Student(std::rand() % 100000, "Iayn Bogdanovich", 1978, "Mathematics", 3.8);
	Student junior = Student(std::rand() % 100000, "Johnny Gates", 1978, "Mechanical Engineering", 4.2);
	Student river = Student(std::rand() % 100000, "River Song", 1979, "History", 2.8);

	cpp.addInstructor(koyuturk);
	cpp.addInstructor(ozguner);

	std::vector<Student> students_one = {
		tom,
		ammar
	};

	std::vector<Student> students_two = {
		iayn,
		junior,
		river
	};

	std::vector<Student> students_three = { ash, junior };

	cpp.addStudents(students_one);
	cpp.addStudents(students_two);

	std::cout << "This should return true: " << cpp.dropStudent(iayn) << endl;
	std::cout << "This should return false: " << cpp.dropStudent(ash) << endl;
	std::cout << "This should return false: " << cpp.dropStudent(iayn) << endl;
	cpp.addStudents(students_three);
	std::cout << "This should return true: " << cpp.dropStudent(ash) << endl;

	cpp.printStudents();

	/*===========EXTRA CREDIT PORTIONS UNCOMMENT TO WORK ON===========*/
/*
	//Part A
	Instructor newman = Instructor(std::rand() % 100000, "Wyatt Newman", "Electrical Engineering", 2);

	Course robotics = Course("Modern Robot Programming", "EECS", 308, "Glennan", 519, 3);
	Course literature = Course("Advanced Purple Prose", "ENGL", 404, "Clark", 128, 4);

	std::cout << "This should return true: " << robotics.addInstructor(newman);
	std::cout << "This should return true: " << cpp.addInstructor(newman);
	std::cout << "This should return false: " << literature.addInstructor(newman);

	//Part B
	std::vector<Student> dropped_robotics_one = robotics.addStudents(students_one);
	std::vector<Student> dropped_robotics_two = robotics.addStudents(students_two);

	std::vector<Student> dropped_literature_one = literature.addStudents(students_one);
	literature.dropStudent(tom);
	std::vector<Student> dropped_literature_two = literature.addStudents(students_two);

	robotics.printStudents();
	literature.printStudents();
	for (Student s : dropped_robotics_one) {
		std::cout << s.name << "\n";
	}
	std::cout << "\n";
	for (Student s : dropped_robotics_two) {
		std::cout << s.name << "\n";
	}
	std::cout << "\n";
	for (Student s : dropped_literature_one) {
		std::cout << s.name << "\n";
	}
	std::cout << "\n";
	for (Student s : dropped_literature_two) {
		std::cout << s.name << "\n";
	}
	std::cout << "\n";
*/
	return 0;
}