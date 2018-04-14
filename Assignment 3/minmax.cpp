/*
********************************************************************
** Author: Daniel Olivas
** Date: October 14, 2015
** Description: minmax.cpp
********************************************************************
*/
#include <iostream>
using namespace std;

int main()
{
	int num, numInt, userNum, max, min;

	cout << "How many integers would you like to enter? " << endl;	//Promt user to enter integer quantity
	cin >> numInt;
// for loop for user to define number of integers
	cout << "Please enter " << numInt << " integers." << endl;

	for (int num = 0; num < numInt; num++)

	{

		cin >> userNum;

		if (userNum <= min)	// set user number that is the smallest
			min = userNum;

		if (userNum >= max)		// set user number that is largest
			max = userNum;
	}
cout << "min: " << min << endl;

cout << "max: " << max << endl;
		return 0;
}