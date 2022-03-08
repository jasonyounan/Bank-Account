#pragma once
          
//Author:  Jason Younan




#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


//BankAccount class declaration
class BankAccount
{
private:
	int acctNumber;
	string name;
	double balance;

public:
	BankAccount();
	BankAccount(int acct, string owner, double bal);

	void setAcctNumber(int acct);
	void setName(string owner);

	int getAcctNumber();
	string getName();
	double getBalance();

	void deposit(double amount);
	void withdraw(double amount);
	void displayData();

};//End of BankAccount class declaration


  //Member function implementation section

  // Constructor function. Initializes acctNumber to 0, name to �Unknown� and 
  // balance to 0.0.
BankAccount::BankAccount()
{
	acctNumber = 0;
	name = "Unknown";
	balance = 0.0;
}

//Overloaded constructor. overloaded constructor function. 
//Initializes acctNumber, name,and balance to values passed in.  
BankAccount::BankAccount(int acct, string owner, double bal)
{
	acctNumber = acct;
	name = owner;
	balance = bal;
}

//This function set acctNumber to acct 
void BankAccount::setAcctNumber(int acct)
{
	acctNumber = acct;
}

//This function sets the name to owner 
void BankAccount::setName(string owner)
{
	name = owner;
}


//This function returns the acctNumber.
int BankAccount::getAcctNumber()
{
	return acctNumber;
}

//This function returns the  name.
string BankAccount::getName()
{
	return name;
}

//This function returns the balance.
double BankAccount::getBalance()
{
	return balance;
}

//This function adds the amount to the balance.
void BankAccount::deposit(double amount)
{
	balance = balance + amount;
}

//this function subtracts the amount from the balance.
void BankAccount::withdraw(double amount)
{
	balance = balance - amount;
}

// Displays the data of a bank account
void BankAccount::displayData()
{
	cout << "acctNumber: " << acctNumber;
	cout << fixed << showpoint << setprecision(2);
	cout << "  balance: " << balance;
	cout << "  name: " << name << endl;
}