#include "bankAccount.h"

//using namespace std;

int main() {
	BankAccount jackAccount("Jack Smith", 50.0);
	BankAccount jillAccount("Jill Brian", 100.0);
	
	BankAccount bankArray[3];
	bankArray[0].setName("Ralph Kramden");
	bankArray[0].setBalance(10.0);
	bankArray[1].setName("Alice Kramden");
	bankArray[1].setBalance(20.0);
	bankArray[2].setName("Ed Norton");
	bankArray[2].setBalance(30.0);

	BankAccount newArray[5];
	newArray[0] = bankArray[0];
	newArray[1] = bankArray[1];
	newArray[2] = bankArray[2];
	newArray[3] = jackAccount;
	newArray[4] = jillAccount;

	for (int i = 0; i < 5; i++) {
		cout << newArray[i].getName() << " initially has $" << newArray[i].getBalance() << "." << endl; 
		newArray[i].deposit(30.0);
		newArray[i].withdraw(20.0);
		cout << newArray[i].getName() << " now has $" << newArray[i].getBalance() << "." << endl;
	}
}
