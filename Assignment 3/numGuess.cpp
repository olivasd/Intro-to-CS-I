/*
********************************************************************
** Author: Daniel Olivas
** Date: October 14, 2015
** Description: numGuess.cpp
********************************************************************
*/
#include <iostream>
using namespace std;

int main()
{
	int num, guess, guessCount = 0;
	cout << "Enter the number for the player to guess." << endl; //promt user to input number to be guessed
	cin >> num;
	 do {
		   cout << "Enter your guess." << endl;	
			cin >> guess;
			guessCount == guessCount++;	// guessCount adds 1 each time guess is entered
		if (guess > num)				// guess larger than number
			cout << "Too high - try again" << endl;
		else if (guess < num)			// guess less than number
			cout << "Too low - try again" << endl;
		else if (guess == num)
			cout << "You guessed it in " << guessCount << " tries." << endl;	// Promt when guess is correct
	}
	while (guess != num);	// Continue loop as while guess does  ot equal number
	
	return 0;
}
