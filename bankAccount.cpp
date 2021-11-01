#include "bankAccount.h"
//using namespace std;


BankAccount::BankAccount(string n, float bal){
	customerName = n;
	balance = bal;
}
BankAccount::BankAccount() {

}
void BankAccount::setName(string n){
	customerName = n;
}
void BankAccount::setBalance(float bal){
	balance = bal;
}

BankAccount::~BankAccount(){
	cout<<"destroying "<<customerName<<"'s BankAccount"<<endl;
}
string BankAccount::getName(){
	return customerName;
}
float BankAccount::getBalance(){
	return balance;
}
void BankAccount::deposit(float dep){
	balance += dep;
	cout<<"A deposit of "<<dep<<" was made."<<endl;
}
void BankAccount::withdraw(float draw){
	balance -= draw;
	cout<<"A withdrawal of "<<draw<<" was made."<<endl;
}
