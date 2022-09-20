#pragma once
#include <string.h>
#include<iostream>
#include"Validation.h"
using namespace std;
class Person
{
protected:
	int id;
	string name, password;
public:
	Person()
	{
		id = 0;
		name = password = " ";
	};
	Person(int id, string name, string password)
	{
		setId(id);
		setName(name);
		setPassword(password);
	};
	void setId(int i) {
		id = i;
	};
	void setName(string n) {
		if (Validation::nameValid(n))
			name = n;
		else if (n.size() < 5)
			cout << "You entered less than 5 characters" << endl;
		else if (n.size() > 20)
			cout << "You entered more than 20 characters" << endl;
		else
			cout << "Not valid enterd" << endl;
	};
	void setPassword(string p) {
		if (Validation::passValid(p))
			password = p;
		else if (p.size() < 8)
			cout << "You password should be more than 8" << endl;
		else 
			cout << "You password should be less than 20" << endl;

	};
	int getId() {
		return id;
	};
	string getName() {
		return name;
	};
	string getPassword() {
		return password;
	};
	void display() {
		cout << "ID: " << getId() << endl;
		cout << "Name: " << getName() << endl;
		cout << "Password: " << getPassword() << endl;
	};

};

