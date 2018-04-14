/*********************************************************************
** Author: Daniel Olivas
** Date: 10/28/15
** Description:Box.hpp
*********************************************************************/
#ifndef BOX_HPP
#define BOX_HPP

#include <iostream>

using namespace std;

class Box
{
private:
	double height;
	double width;
	double length;
	
public:
	Box();//default constructor

	void setHeight(double h);
	void setWidth(double w);
	void setLength(double l);
	double getVolume(double height, double width, double length);
	double getSurfaceArea(double height, double width, double length);	
};
#endif
