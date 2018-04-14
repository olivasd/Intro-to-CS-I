/*
********************************************************************
** Author: Daniel Olivas
** Date: October 14, 2015
** Description:fileAdder.cpp
********************************************************************
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	const int num1 = 14, num2 = 9, num3 = 12, num4 = -6, num5 = -30, num6 = 8, num7 = 109;
	int	sum;
	string filename;

	cout << "Please enter filename: ";	// promt user to enter filename
	cin >> filename;
	
		inputFile.open(filename.c_str());	// open user filename

		if(inputFile)
		{
			
			outputFile.open(filename.c_str());  // output integers

			outputFile << "14\n";
			outputFile << "9\n";
			outputFile << "12\n";
			outputFile << "-6\n";
			outputFile << "-30\n";
			outputFile << "8\n";
			outputFile << "109\n";

			outputFile.close();

			outputFile.open("sum.txt");	// create output file sum.txt
			
			outputFile << (sum = num1 + num2 + num3 + num4 + num5 + num6 + num7);	// sum of integers
		
			outputFile.close();
	}
	
	else cout << "file doesn't exist\n";

	return 0;
}
