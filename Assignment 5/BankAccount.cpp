/*********************************************************************
** Author: Daniel Olivas
** Date: 10/28/15
** Description:BankAccount.cpp
*********************************************************************/
//BankAccount.cpp
#include "BankAccount.hpp"

BankAccount::BankAccount() //default constructor
{
	customerName = "";
	customerID = "";
	customerBalance = 0.0;
}

string BankAccount::getCustomerName() {
	return customerName;
}
string BankAccount::getCustomerID() {
	return customerID;
}
double BankAccount::getCustomerBalance() {
	return customerBalance;
}
/*********************************************************************
** Description: Function determines new balance after withdrawal
**
*********************************************************************/
double BankAccount::bankWithdrawal(double amount)
{
	return customerBalance - amount;
}
/*********************************************************************
** Description: Function deternimes new balance after deposit
**
*********************************************************************/
double BankAccount::bankDeposit(double amount)
{
	return customerBalance + amount;
}
