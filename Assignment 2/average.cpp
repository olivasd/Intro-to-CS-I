/*
********************************************************************
** Author: Daniel Olivas
** Date: 10/7/2015
** Description: Average.cpp
********************************************************************
*/

#include <iostream>
using namespace std;

int main()

{
	double num1, num2, num3, num4, num5, avg;

	cout << "please enter five numbers: "; endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	cin >> num5;

	avg = (num1 + num2 + num3 + num4 + num5) / 5;
	cout << "the average of those numbers is: " << avg << endl;
	
	return 0;
}