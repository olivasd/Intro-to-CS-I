/*********************************************************************
** Author: Daniel Olivas
** Date: 10/21/15
** Description: fallDistance.cpp
*********************************************************************/
#include <iostream>

using namespace std;
/*********************************************************************
** Description: fallDistance takes the falling time as an argument
**
*********************************************************************/

double fallDistance(int t);


/*int main()
{
	
	int t;
	
	cout << "How many seconds does object fall?  " << endl;
	cin >> t;
	double distance = fallDistance(t);

	return 0;
}*/
/*********************************************************************
** Description: returns distance in meters that the object has fallen in that time
**
*********************************************************************/

double fallDistance(int t)
{
	double d;
	d = 0.5*9.8*t*t;

	cout << "The object will fall " << d << " meters." << endl;

	return d;
}