// Circle2 class member-function definitions.
#include <iostream>

using std::cout;

#include "circle.h"   // Circle class definition

/*
// default constructor
Circle::Circle(int xValue, int yValue, double radiusValue)
{
	x = xValue;
	y = yValue;
	setRadius(radiusValue);
} // end Circle constructor
*/

// default constructor
Circle::Circle(int xValue, int yValue, double radiusValue)
    : Point(xValue, yValue)  // call base-class constructor
{
    setRadius(radiusValue);
} // end Circle4 constructor


// set radius 
void Circle::setRadius(double radiusValue)
{
	radius = (radiusValue < 0.0 ? 0.0 : radiusValue);
} // end function setRadius
  
  // return radius 
double Circle::getRadius() const
{
	return radius;
} // end function getRadius
  
  // calculate and return diameter
double Circle::getDiameter() const
{
	return 2 * getRadius();
} // end function getDiameter
  
  // calculate and return circumference
double Circle::getCircumference() const
{
	return 3.14159 * getDiameter();
} // end function getCircumference
  
  // calculate and return area
double Circle::getArea() const
{
	return 3.14159 * getRadius() * getRadius();
} // end function getArea
  
  // output Circle object
void Circle::print() const
{
    cout << "Center = "; 
    Point::print();      // invoke Point3's print function
    cout << "; Radius = " << getRadius();

} // end function print
