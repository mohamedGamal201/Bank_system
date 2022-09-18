#include "Client.h"

Client::Client()
{
	balance = 1500;
}
Client::Client(int id, string name, string password, double balance) :Person(id, name, password) 
{
	if(balance<1500)
		cout << "The min balance is 1500" << endl;
	else
		this->balance = balance;
}
void Client::setBalance(double balance)
{
	this->balance = balance;
}
double Client::getBalance()
{
	return balance;
}
void Client::deposit(double amount)
{
	balance += amount;
}
void Client::withdraw(double amount)
{
	
	if (amount > balance)
		cout << "Sorry.Your balance is not enough." << endl;
	else
		balance -= amount;
}
double Client::checkBalance()
{
	return balance;
}
void Client::transferTo(double amount, Client & recipient)
{
	if (amount > balance)
		cout << "Sorry. Your balance is not enught." << endl;
	else
	{
		balance -= amount;
		recipient.balance += amount;
		cout << "Transfer Successful."<<endl;
	}
}

void Client::display()
{
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Password: " << password << endl;
	cout << "Balance: " << balance << endl;
}
