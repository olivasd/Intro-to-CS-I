/*********************************************************************
** Author: Daniel Olivas
** Date:11/4/2015
** Description:LineSegment.cpp
*********************************************************************/
//LineSegment.cpp
#include <iostream>
#include <cmath>

#include "LineSegment.hpp"

using namespace std;

LineSegment::LineSegment()
{
}

LineSegment::LineSegment(Point p1, Point p2)
{
	setEnd1(p1);
	setEnd2(p2);
}

void LineSegment::setEnd1(Point P1)
{
	p1 = P1;
}

void LineSegment::setEnd2(Point P2)
{
	p2 = P2;
}

Point LineSegment::getEnd1()
{
	return p1;
}
Point LineSegment::getEnd2()
{
	return p2;
}
/*********************************************************************
** Description: Return length of line from point1 to point2
**
*********************************************************************/
double LineSegment::length()
{
	return p1.distanceTo(p2);
}
/*********************************************************************
** Description:Returns the slope of line or infinity if line is vertical
**
*********************************************************************/
double LineSegment::slope()
{
	if (p2.getXCoord() - p1.getXCoord() == 0)
	{
		cout << "infinity" << endl;
	}
	else
	{
		return (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
	}
}