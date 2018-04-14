/*********************************************************************
** Author: Daniel Olivas
** Date: 11/18/15
** Description: Item.hpp is a header file for Item class
*********************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;

class Item 
{
private:
	string name;
	double price;
	int quantity;
public:
	Item();		// default constructor
	// constructor that takes name, price, and quantity parameters
	Item(string newName, double newPrice, int newQuantity);
	// setters an getters
	void setName(string newName);
	string getName();
	void setPrice(double newPrice);
	double getPrice();
	void setQuantity(int newQuantity);
	int getQuantity();
};
#endif