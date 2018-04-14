/*********************************************************************
** Author: Daniel Olivas
** Date: 11/18/15
** Description: Item.cpp class
*********************************************************************/
#include <string>

#include "Item.hpp"

using namespace std;

// default constructor that sets name to "", price to 0.0 and quantity to 0.
Item::Item()
{
	name = "";
	price = 0.0;
	quantity = 0;
}
// constructor with name, price, and quantity parameters
Item::Item(string newName, double newPrice, int newQuantity)
{
	name = newName;
	price = newPrice;
	quantity = newQuantity;
}
// setter and getters
void Item::setName(string newName)
{
	name = newName;
}

string Item::getName()
{
	return name;
}

void Item::setPrice(double newPrice)
{
	price = newPrice;
}

double Item::getPrice()
{
	return price;
}

void Item::setQuantity(int newQuantity)
{
	quantity = newQuantity;
}

int Item::getQuantity()
{
	return quantity;
}
