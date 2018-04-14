/*
********************************************************************
** Author: Daniel Olivas
** Date: 10/7/2015
** Description:change.cpp
********************************************************************
*/

#include <iostream> 

using namespace std;

// This  program show amount of coins for change entered
int main()

{

	const int QUARTER = 25;
	const int DIME = 10;
	const int NICKEL = 5;
	const int PENNY = 1;
	int Q, D, N, P, cent;

	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> cent;
	Q = cent / QUARTER;			
	cent = cent % QUARTER;		
	D = cent / DIME;			
	cent = cent % DIME;
	N = cent / NICKEL;
	cent = cent % NICKEL;
	P = cent / PENNY;

	
	cout << "Your change will be:" << endl;
		cout << "Q: " << Q << endl;
		cout << "D: " << D << endl;
		cout << "N: " << N << endl;
		cout << "P: " << P << endl;

		return 0;
}