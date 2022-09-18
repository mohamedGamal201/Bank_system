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
	Client();
	Client(int id, string name, string password, double balance);
	void setBalance(double balance);
	double getBalance();
	void deposit(double amount);
	void withdraw(double amount);
	double checkBalance();
	void transferTo(double amount, Client& recipient);
	void display();
	
};

