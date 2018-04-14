/*********************************************************************
** Author: Daniel Olivas
** Date: 12/3/15
** Description: Patron.cpp
*********************************************************************/
#include <iostream>
#include "Patron.hpp"
// constructor takes an idNum and name and initializes fineAmount to 0
Patron::Patron(std::string idn, std::string n)
{
	idNum = idn;
	name = n;
	fineAmount = 0.00;
}
//getters and setters
std::string Patron::getIdNum()
{
	return idNum;
}

std::string Patron::getName()
{
	return name;
}

std::vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}
/*********************************************************************
** Description: adds the specific book to checkedOutBooks
*********************************************************************/
void Patron::addBook(Book * b)
{
	checkedOutBooks.push_back(b);
}
/*********************************************************************
** Description: removes specific book from from checkedOutBooks
*********************************************************************/
void Patron::removeBook(Book * b)
{
	for (int i = 0; i < checkedOutBooks.size(); i++)
	{
		if (checkedOutBooks[i] == b)
		{
			checkedOutBooks.erase(checkedOutBooks.begin() + i);
		}
	}
}

double Patron::getFineAmount()
{
	return fineAmount;
}
/*********************************************************************
** Description: Increases and decreases fineAmount
*********************************************************************/
void Patron::amendFine(double amount)
{
	if (amount > 0)
	{
		fineAmount += amount;
	}
	else
	{
		fineAmount -= amount;
	}
}