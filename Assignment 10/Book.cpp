/*********************************************************************
** Author: Daniel Olivas
** Date: 12/3/15
** Description: Book.cpp
*********************************************************************/
#include "Book.hpp"
using namespace std;
//constructor takes an idCode, title and author 
//checkedOutBy and requestedBy initialized to NULL
//a new Book should be on the shelf
Book::Book(std::string idc, std::string t, std::string a)
{
	idCode = idc;
	title = t;
	author = a;
	location = ON_SHELF;
	checkedOutBy = NULL;
	requestedBy = NULL;
	dateCheckedOut = 0;
}
//getters and setters
int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}

std::string Book::getIdCode()
{
	return idCode;
}

std::string Book::getTitle()
{
	return title;
}

std::string Book::getAuthor()
{
	return author;
}

Locale Book::getLocation()
{
	return location;
}

void Book::setLocation(Locale l)
{
	location = l;
}

Patron * Book::getCheckedOutBy()
{
	return checkedOutBy;
}

void Book::setCheckedOutBy(Patron *p)
{
	checkedOutBy = p;
}

Patron * Book::getRequestedBy()
{
	return requestedBy;
}

void Book::setRequestedBy(Patron *p)
{
	requestedBy = p;
}

int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}

void Book::setDateCheckedOut(int d)
{
	dateCheckedOut = d;
}

