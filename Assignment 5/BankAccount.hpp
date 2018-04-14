/*********************************************************************
** Author: Daniel Olivas
** Date: 10/28/15
** Description:BankAccount.hpp
*********************************************************************/

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <iostream>
#include <string>

using namespace std;

// Defines the interface of the BankAccount class
class BankAccount
{
private:
	string customerName;
	string customerID;
	double customerBalance;
	
public:
	BankAccount();

	string getCustomerName();
	string getCustomerID();
	double getCustomerBalance();
	
	double withdraw(double amount);
	double deposit(double amount);
};
#endif
