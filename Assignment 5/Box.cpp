/*********************************************************************
** Author: Daniel Olivas
** Date: 10/28/15
** Description:Box.cpp
*********************************************************************/
//Box.cpp
#include "Box.hpp"

// constructor
Box::Box() {
	double height = 1;
	double width = 1;
	double length = 1;
}

void Box::setHeight(double h)
{
	height = h;
}

void Box::setWidth(double w)
{
	width = w;
}

void Box::setLength(double l)
{
	length = l;
}

double Box::getVolume(double height, double width, double length)
{
	return height * width * length;
}

double Box::getSurfaceArea(double height, double width, double length)
{
	return 2 * (height * width) + 2 * (height * length) + 2 * (width * length);
}
