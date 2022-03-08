
//Author:  Jason Younan

#include <iostream>
#include <iomanip>
#include <string>

#include "BankAccount.h"  //the class definition

using namespace std;

void fillAccounts(BankAccount accts[]);
void displayAllAccounts(BankAccount accts[]);
double getTotalCash(BankAccount accts[]);

const int SIZE = 3;

int main()
{

	BankAccount wellsFargo[SIZE];  //declare an array of BankAccounts

	cout << "Load Wells Fargo with BankAccount objects" << endl;
	fillAccounts(wellsFargo);

	cout << "\nWells Fargo Bank Accounts";
	cout << "\n-------------------------" << endl;
	/** display all the account information in wellsFargo */
	displayAllAccounts(wellsFargo);

	/** display the total cash in wellsFargo */
	cout << "Total cash in account: $" << getTotalCash(wellsFargo) << endl; 

	cout << "\nBank Closed\n" << endl;

	system("Pause");
	return 0;

}//end of main

void fillAccounts(BankAccount accts[])
{
	int acctNo;
	double initBalance;
	string owner;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the account number, balance, owner: ";
		cin >> acctNo >> initBalance;
		getline(cin, owner);

		//create a BankAccount object
		BankAccount b(acctNo, owner, initBalance);

		//load BankAccount object into the array
		accts[i] = b;

	}
}

void displayAllAccounts(BankAccount accts[])
{
	//** students implement this method
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Bank Account #" << i;
		cout << " Bank Account Number: " << accts[i].getAcctNumber();
		cout << " Balance: " << accts[i].getBalance();
		cout << " Name: " << accts[i].getName() << endl;
	}
}

double getTotalCash(BankAccount accts[])
{
	//** students implement this method
	double total;
	total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += accts[i].getBalance();
		
	}

	return total;
}
/*
Load wellsFargo with BankAccount objects
Enter the account number, balance, owner: 1111 550.50 Minnie Mouse
Enter the account number, balance, owner: 2222 324.32 Donald Duck
Enter the account number, balance, owner: 3333 214.20 Bart Simpson

Wells Fargo Bank Accounts
-------------------------
Bank Account #0 Bank Account Number: 1111 Balance: 550.5 Name:  Minnie Mouse
Bank Account #1 Bank Account Number: 2222 Balance: 324.32 Name:  Donald Duck
Bank Account #2 Bank Account Number: 3333 Balance: 214.2 Name:  Bart Simpson
Total cash in account: $1089.02

Bank Closed

Press any key to continue . . .
*/