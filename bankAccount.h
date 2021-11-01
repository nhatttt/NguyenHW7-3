#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
class BankAccount{
	private:
		string customerName;
		float balance;
		
	
	public:
		BankAccount(string n, float bal);
		BankAccount();
		~BankAccount();

		void setName(string n);
		void setBalance(float bal);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
};

#endif
