/*********************************************************************
** Author: Daniel Olivas
** Date: 11/18/15
** Description: ShoppingCart.hpp is a header file for ShoppingCart class
*********************************************************************/
#include "Item.hpp"

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

class ShoppingCart
{
private:
	Item *items[100];  //array of pointer-to-Item (Item*) that can contain up to 100 Item pointers
	int arrayEnd;
public:
	ShoppingCart(); //default constructor
	void addItem(Item *newItem);
	double totalPrice();
};

#endif