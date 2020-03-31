
#include "faculty.hpp"
#include "staff.hpp"
#include <iostream>


int main() {
	Faculty f = Faculty();
	Staff s = Staff();

	std::cout << f.works_together(s) << std::endl;

	/*
	Administrator jing_li = Administrator("Computer Science", 80000, 12345, "Jing Li");

	Faculty cenk = Faculty(12346, "Murat Cenk Cavusoglu", 50000, "Computer Science", "Professor", "Surgical Robotics");
	Faculty orhan = Faculty(12347, "Orhan Ozguner", 50000, "Computer Science", "Adjunct Professor", "Surgical Robotics");
	Faculty wyatt = Faculty(12348, "Wyatt Newman", 50000, "Electrical Engineering", "Professor", "Surgical Robotics");
	Faculty mehmet = Faculty(12349, "Mehmet Koyuturk", 50000, "Computer Science", "Professor", "Bioinformatics");

	jing_li.addFaculty(cenk);
	jing_li.addFaculty(orhan);
	jing_li.addFaculty(mehmet);

	Staff cynthia = Staff(12350, "Cynthia Hatcher", 20000, "Computer Science", "Assistant to the Chair");
	Staff david = Staff(12351, "David Jarvi", 20000, "Computer Science", "Technician");
	Staff julie = Staff(12352, "Julie Martinez", 30000, "Biomedical Engineering", "Regulatory Compliance Director");

	std::cout << cynthia.works_with(david) << " should be 1\n";
	std::cout << david.works_with(julie) << " should be 0\n";
	std::cout << cenk.works_with(orhan) << " should be 1\n";
	std::cout << ((Employee)orhan).works_with(julie) << " should be 0\n";
	std::cout << ((Employee)cenk).works_with(cynthia) << " should be 1\n";
	std::cout << wyatt.works_with(cenk) << " should be 0\n";
	std::cout << orhan.works_with(cenk) << " should be 1\n";
	std::cout << mehmet.works_with(cenk) << " should be 0\n";

	jing_li.addStaff(cynthia);
	jing_li.addStaff(david);

	Student tom = Student(12360, "Tom Shkurti", 2022, "Computer Science", 4.0);
	Student iayn = Student(12361, "Iayn Bogdanov", 1974, "Computer Science", 3.5);
	
	jing_li.addStudent(tom);
	jing_li.addStudent(iayn);


	ResearchAssistant ammar = ResearchAssistant("Robotics", "Computer Science", 3.0, 2022, 12362, "Ammar Nahari");
	ResearchAssistant russel = ResearchAssistant("Robotics", "Lab Manager", "Computer Science", 1000, 12375, "Russel Jackson");

	jing_li.addResearcher(ammar);
	jing_li.addResearcher(russel);

	std::cout << jing_li.print() << "\n";
	*/

	/*=================EXTRA CREDIT=================*/
	/*=======UNCOMMENT THESE LINES TO ATTEMPT=======*/
	//ResearchAssistant tom_promoted = ResearchAssistant("Robotics", tom, jing_li);
	//std::cout << jing_li.print() << "\n";
	/*==============================================*/
	
	return 0;
}