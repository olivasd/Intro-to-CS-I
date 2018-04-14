/*
********************************************************************
** Author: Daniel Olivas
** Date: 10/7/2015
** Description:tempConvert.cpp
********************************************************************
*/

#include <iostream>                        
using namespace std;
// This program convert Celsius to Fahrenheit
int main() 
{
	double celsius, fahrenheit;

	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsius;
	fahrenheit = celsius * 9/5 + 32;
	cout << "The equivalent Fahrenheit temperature is:" << fahrenheit << endl;

	return 0;
}