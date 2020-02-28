

/*

#include <iostream>
#include <iomanip>

using namespace std;

//class definition
class Time {
    

public: //it can be accessed everywhere.
    Time(); //class constructor
    Time(int, int, int); //constructor with time details
    void setTime(int, int, int); //set hour, minute , second
    void printUniversal(); 
    void printStandard();

private: //it may only be accessed by the class that defines the member.
    int hour; 
    int minute; 
    int second;

protected: //it can be accessed only within the class itself and by inheriting and parent classes.

}; //end class

//// Time constructor initializes each data member to zero and
// ensures all Time objects start in a consistent state     
Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
} //end constructor

//constructor with set values
Time::Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

// set new Time value using universal time, perform validity
// checks on the data values and set invalid values to zero 
void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
} // end function setTime      

// print Time in universal format
void Time::printUniversal()
{
    cout <<setfill('0') << setw(2) << hour << ":"<< setw(2) << minute << ":"<< setw(2) << second;
} // end function printUniversal

// print Time in standard format
void Time::printStandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)<< ":" << setfill('0') << setw(2) << minute<< ":" << setw(2) <<
        second<< (hour < 12 ? " AM" : " PM");
} // end function printStandard


int main()
{
    Time t;  // instantiate object t of class Time

    // output Time object t's initial values
    cout << "The initial universal time is ";
    t.printUniversal();   // 00:00:00
    
    cout << "\nThe initial standard time is ";
    t.printStandard();    // 12:00:00 AM
    
    t.setTime(13, 27, 6);   // change time and output Time object t's new values
    cout << "\n\nUniversal time after setTime is ";
    t.printUniversal();   // 13:27:06

    cout << "\nStandard time after setTime is ";
    t.printStandard();    // 1:27:06 PM
    
    t.setTime(99, 99, 99);  // attempt invalid settings and output t's values after specifying invalid values
    cout << "\n\nAfter attempting invalid settings:"<< "\nUniversal time: ";
    t.printUniversal();   // 00:00:00

    cout << "\nStandard time: ";
    t.printStandard();    // 12:00:00 AM
    cout << endl;
    
    return 0;
} // end main


*/