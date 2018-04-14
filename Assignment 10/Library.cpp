/*********************************************************************
** Author: Daniel Olivas
** Date: 12/3/15
** Description: Library.cpp
*********************************************************************/
#include "Library.hpp"
#include "Book.hpp"
#include <iostream>
#include <string>

using namespace std;
// constructor initializes the currentDate to zero
Library::Library()
{
	currentDate = 0;
}
/*********************************************************************
** Description: Adds the book to holdings
*********************************************************************/
void Library::addBook(Book * b)
{
	holdings.push_back(b);
}
/*********************************************************************
** Description: Adds the patron to members
*********************************************************************/
void Library::addPatron(Patron * p)
{
	members.push_back(p);
}
/*********************************************************************
** Description: Checking out options for patron
*********************************************************************/
std::string Library::checkOutBook(std::string pID, std::string bID)
{
	string bookNotFound = "book not found";
	string patronNotFound = "patron not found";
	string bookCheckedOut = "book already checked out";
	string bookOnHold = "book on hold by other patron";
	//if the Book is not in Library, return "book not found"
	Book* b = getBook(bID);
	if (b == NULL)
	{
		return bookNotFound;
	}
	//if the Patron is not in the Library, return "patron not found"
	Patron* p = getPatron(pID);
	if (p == NULL)
	{
		return patronNotFound;
	}
	//if Book is already checked out, return "book already checked out"	
	if (b->getLocation() == CHECKED_OUT)
	{
		return bookCheckedOut;
	}
	//if Book is on hold by another Patron, return "book on hold by other patron"
	if (b->getRequestedBy() != NULL && b->getRequestedBy() != p)
	{
		return bookOnHold;
	}
	//otherwise update the Book's checkedOutBy, dateCheckedOut and Location;
	b->setCheckedOutBy(p);
	b->setDateCheckedOut(currentDate);
	b->setLocation(CHECKED_OUT);
	//if the Book was on hold for this Patron, update requestedBy
	if (b->getRequestedBy() == p)
	{
		b->setRequestedBy(NULL);
	}
	// update the Patron's checkedOutBooks
	p->addBook(b);
	// return "check out successful"
	//string checkOutSuccess = "check out successful";
	return "check out successful";
}
/*********************************************************************
** Description: Returning book to library
*********************************************************************/
std::string Library::returnBook(std::string bID)
{
	string bookNotFound = "book not found";
	string bookNotCheckedOut = "book already in library";
	// if Book is not in the Library, return "book not found"
	Book* b = getBook(bID);
	if (b == NULL)
	{
		return bookNotFound;
	}
	//if Book is not checked out, return "book already in library"
	if (b->getLocation() != CHECKED_OUT)
	{
		return bookNotCheckedOut;
	}
	//update the Patron's checkedOutBooks
	Patron* p = b->getCheckedOutBy();
	p->removeBook(b);
	//update the Book's location depending on whether another Patron has requested it
	if (b->getRequestedBy() != NULL)
	{
		b->setLocation(ON_HOLD_SHELF);
	}
	else 
	{
		b->setLocation(ON_SHELF);
	}
	// update the Book's checkedOutBy
	b->setCheckedOutBy(NULL);
	// return "return successful"
	string returnSuccess = "return successful";

	return returnSuccess;
}
/*********************************************************************
** Description: Requesting book
*********************************************************************/
std::string Library::requestBook(std::string pID, std::string bID)
{
	string bookNotFound = "book not found";
	string patronNotFound = "patron not found";
	string bookOnHold = "book on hold by other patron";
	//if Book is not in the Library, return "book not found"
	Book* b = getBook(bID);
	if (b == NULL)
	{
		return bookNotFound;
	}
	//if Patron is not in the Library, return "patron not found"
	Patron* p = getPatron(pID);
	if (p == NULL)
	{
		return patronNotFound;
	}
	//if Book is already requested, return "book already on hold"
	if (b->getRequestedBy() != NULL && b->getRequestedBy() != p)
	{
		return bookOnHold;
	}
	//update the Book's requestedBy
	b->setRequestedBy(p);
	//if the Book is on the shelf, update its location to on hold
	if (b->getLocation() == ON_SHELF)
	{
		b->setLocation(ON_HOLD_SHELF);
	}
	// return "request successful
	string requestSuccessful = "request successful";

	return requestSuccessful;
}
/*********************************************************************
** Description: takes as a parameter the amount that is being paid
*********************************************************************/
std::string Library::payFine(std::string pID, double payment)
{
	string patronNotFound = "patron not found";
	// if Patron is not in the Library, return "patron not found"
	Patron* p = getPatron(pID);
	if (p == NULL)
	{
		return patronNotFound;
	}
	//use amendFine to update the Patron's fine; return "payment successful"
	p->amendFine(-payment);
	
	//string paymentSuccess = "payment successful";

	return "payment successful";
}
/*********************************************************************
** Description:increment current date
** increase each Patron's fines by 10 cents for each overdue Book they have checked out
*********************************************************************/
void Library::incrementCurrentDate()
{
	currentDate++;
	Patron* member = NULL; 	
	Book* book = NULL; 		
	vector<Book*> checkedBooks; 
		
	for (int i = 0; i < members.size(); i++)
	{
		member = members[i]; 
		checkedBooks = member->getCheckedOutBooks(); 

		int days = 0;
		for (int j = 0; j < checkedBooks.size(); j++)
		{
			book = checkedBooks[j];
			days = currentDate - book->getDateCheckedOut();
			if (days > Book::CHECK_OUT_LENGTH)
			{
				member->amendFine(.10);
			}
		}
	}
}
//returns a pointer to the Patron corresponding to the ID parameter
//or NULL if no such Patron is a member
Patron * Library::getPatron(std::string pID)
{
	for (int i = 0; i < members.size(); i++)
	{
		if (members[i]->getIdNum() == pID)
		{
			return members[i];
		}
	}
	return NULL;
}
//returns a pointer to the Book corresponding to the ID parameter
//or NULL if no such Book is in the holdings
Book * Library::getBook(std::string bID)
{
	for (int j = 0; j < holdings.size(); j++)
	{
		if (holdings[j]->getIdCode() == bID)
		{
			return holdings[j];
		}
	}
	return NULL;
}