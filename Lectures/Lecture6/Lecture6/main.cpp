/*
// Demonstrating a default constructor for class Time.
#include <iostream>
#include "time.h" // include definition of class Time from time.h

using std::cout;
using std::endl;

int main()
{
	Time t1;               // all arguments defaulted
	Time t2(2);          // minute and second defaulted
	Time t3(21, 34);     // second defaulted
	Time t4(12, 25, 42); // all values specified
	Time t5(27, 74, 99); // all bad values specified
	
	cout << "Constructed with:\n\n"
		<< "all default arguments:\n  ";
	t1.printUniversal();  // 00:00:00
	cout << "\n  ";
	t1.printStandard();   // 12:00:00 AM
	
	cout << "\n\nhour specified; default minute and second:\n  ";
	t2.printUniversal();  // 02:00:00
	cout << "\n  ";
	t2.printStandard();   // 2:00:00 AM
	cout << "\n\nhour and minute specified; default second:\n  ";
	t3.printUniversal();  // 21:34:00
	cout << "\n  ";
	t3.printStandard();   // 9:34:00 PM
	
	cout << "\n\nhour, minute, and second specified:\n  ";
	t4.printUniversal();  // 12:25:42
	cout << "\n  ";
	t4.printStandard();   // 12:25:42 PM
	cout << "\n\nall invalid values specified:\n  ";
	t5.printUniversal();  // 00:00:00
	cout << "\n  ";
	t5.printStandard();   // 12:00:00 AM
	cout << endl;
	
	return 0;

} // end main

*/