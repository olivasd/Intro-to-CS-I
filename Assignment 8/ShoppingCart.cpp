/*********************************************************************
** Author: Daniel Olivas
** Date: 11/18/15
** Description: ShoppingCart.cpp
*********************************************************************/

#include "ShoppingCart.hpp"
// default constructor
ShoppingCart::ShoppingCart()
{
	for (int i = 0; i < 100; i++)
		items[i] = NULL;		//initializes each element of the array to NULL
		arrayEnd = 0;		//initializes arrayEnd to zero
}
/*********************************************************************
** Description: function that takes as a parameter a pointer to an 
**  Item and adds it to the array and updates arrayEnd
*********************************************************************/
void ShoppingCart::addItem(Item *newItem)
{
	items[arrayEnd] = newItem;
	arrayEnd++;
}
/*********************************************************************
** Description: function that returns the total cost of all Items in  
**  the ShoppingCart
*********************************************************************/
double ShoppingCart::totalPrice()
{
	double totalPrice = 0;
	for (int i = 0; i < arrayEnd; i++)
		totalPrice += (items[i]->getPrice() * items[i]->getQuantity());
		return totalPrice;
}