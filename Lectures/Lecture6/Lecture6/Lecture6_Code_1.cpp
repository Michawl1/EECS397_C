/*

#include <iostream>
using namespace std;

//Data Members
int roll;
int age;
int marks;

//member functions
void printDetails()
{
    cout << "Roll = " << roll << "\n";
    cout << "Age = " << age << "\n";
    cout << "Marks = " << marks;
}

// A variable declaration like basic data types 
struct Point
{
    int x, y;
};

int main()
{
    cout << "Declare pointer (empty)" << endl<<endl;
    Point p1;  // The variable p1 is declared like a normal variable 
    //cout << "x = " << p1.x << ", y = " << p1.y << endl;

    // Accessing members of point p1 
    cout << "Access pointer members" << endl;
    p1.x = 20;
    p1.y = 30;
    cout << "x = " << p1.x << ", y = " << p1.y<<endl<<endl;

    // A valid initialization. member x gets value 0 and y 
  // gets value 1.  The order of declaration is followed. 
    cout << "Access pointer members" << endl;
    Point p2 = { 0, 1 };
    cout << "x = " << p2.x << ", y = " << p2.y << endl<<endl;


    // Create an array of structures 
    cout << "Array of structs" << endl;
    Point arr[10];
    // Access array members 
    arr[0].x = 10;
    arr[0].y = 20;
    arr[1].x = 30;
    arr[1].y = 40;
    arr[2].x = 50;
    arr[2].y = 60;
    cout << arr[0].x << " " << arr[0].y<<endl;
    cout << arr[1].x << " " << arr[1].y << endl;
    cout << arr[2].x << " " << arr[2].y << endl<<endl;

    //Like primitive types, we can have pointer to a structure.
    // If we have a pointer to structure, members are accessed using arrow ( -> ) 
    cout << "Pointer to struct" << endl;

    Point p3 = { 1, 2 };

    // p4 is a pointer to structure p3 
    Point* p4 = &p3;

    // Accessing structure members using 
    // structure pointer 
    cout << "x= "<<p4->x << "y= " << p4->y<<endl;
    return 0;

}

*/