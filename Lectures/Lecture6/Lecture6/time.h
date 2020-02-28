

// prevent multiple inclusions of header file
// Time abstract data type definition
class Time {
public:
	Time(int = 0, int = 0, int = 0); // default constructor
	void setTime(int, int, int); // set hour, minute, second
	void printUniversal();         // print universal-time format
	void printStandard();          // print standard-time format
private:
	int hour;     // 0 - 23 (24-hour clock format)
	int minute;   // 0 - 59
	int second;   // 0 - 59
}; // end class Time



