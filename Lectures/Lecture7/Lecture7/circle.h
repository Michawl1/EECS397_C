#pragma once
// Circle class contains x-y coordinate pair and radius.

#include "point.h"  // Point class definition

class Circle : public Point {

public:
	
	Circle(int = 0, int = 0, double = 0.0); // default constructor

	void setRadius(double);   // set radius
	double getRadius() const;   // return radius

	double getDiameter() const;       // return diameter
	double getCircumference() const;  // return circumference
	double getArea() const;           // return area

	void print() const;         // output Circle2 object

private:
	double radius;  // Circle2's radius

}; //end class circle
