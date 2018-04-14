/*********************************************************************
** Author: Daniel Olivas
** Date:11/4/2015
** Description: Point.hpp
*********************************************************************/
//point.hpp
#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private: 
	double X;
	double Y;

public: 
	Point();
	Point(double XCoord, double YCoord);
	double getXCoord();
	double getYCoord();
	void setXCoord(double);
	void setYCoord(double);	
	double distanceTo( Point&);
};
#endif