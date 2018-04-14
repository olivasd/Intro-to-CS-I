/*********************************************************************
** Author: Daniel Olivas
** Date:11/4/2015
** Description:LineSegment.hpp
*********************************************************************/
//LineSegment.hpp
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
private:
	Point p1;
	Point p2;
public:
	LineSegment();
	LineSegment(Point, Point);
	Point getEnd1();
	Point getEnd2();
	void setEnd1(Point);
	void setEnd2(Point);
	double length();
	double slope();
};
#endif
