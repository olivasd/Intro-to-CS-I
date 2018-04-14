/*********************************************************************
** Author: Daniel Olivas
** Date:11/4/2015
** Description:Point.cpp
*********************************************************************/
//Point.cpp
#include <iostream>
#include <cmath>

#include "Point.hpp"

using namespace std;

Point::Point()
{
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double XCoord, double YCoord)
{
	setXCoord(XCoord);
	setYCoord(YCoord);
}

void Point::setXCoord(double XCoord)
{
	X = XCoord;
}

void Point::setYCoord(double YCoord)
{
	Y = YCoord;
}

double Point::getXCoord()
{
	return X;
}

double Point::getYCoord() 
{
	return Y;
}
/*********************************************************************
** Description: Get distance from X coordinate to Y coordinate
**
*********************************************************************/
double Point::distanceTo( Point&)
{
	double XCoord1, XCoord2, YCoord1,YCoord2;
	double distX, distY, dist;
	XCoord1 = X;
	XCoord2 = X;
	YCoord1 = Y;
	YCoord2 = Y;
	distX = XCoord1 - XCoord2;
	distY = YCoord1 - YCoord2;
	dist = sqrt(pow(distX, 2.0) + pow(distY, 2.0));
	return dist;
}
