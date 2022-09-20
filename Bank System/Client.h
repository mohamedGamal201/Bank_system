#pragma once
#include <string.h>
#include "Person.h"
#include<iostream>
using namespace std;
class Client : public Person
{
private:
	double balance;
public:
	Client() :Person() {
		balance = 1500;
	};
	Client(int id, string name, string password, double balance) :Person(id, name, password) {
		setBalance(balance);
	};
	void setBalance(double b) {
		if (Validation::balanceValid(b))
			balance = b;
		else
		{
			cout << "\aYou should Enter Balance more than 1500" << endl;
			exit(0);
		}
			
	};
	double getBalance() {
		return balance;
	};
	void deposit(double amount) {
		balance += amount;
	};
	void withdraw(double amount) {
		if (balance - amount > 1500)
			balance -= amount;
		else {
			cout << "\aCan Not withdraw. Your balanc is less than 1500" << endl;
			exit(0);
		}	
	};
	void transferTo(double amount, Client& recipient) {
		withdraw(amount);
		recipient.balance += amount;
	};
	void checkBalance() {
		if (Validation::balanceValid)
			cout << "Your balance is more than 1500 you can withdraw and transfer to" << endl;
		else
			cout << "Your balance is less than 1500 you can't withdraw and transfer to" << endl;
	};
	void display() {
		Person::display();
		cout << "Balance: " << getBalance() << endl;
		cout << "\n*************************************\n";
	};
	
};

