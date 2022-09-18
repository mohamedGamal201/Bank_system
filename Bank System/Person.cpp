#include "Person.h"
#include<iostream>
#include<string.h>
#include"Validation.h"
using namespace std;

Person::Person() 
{
	id = 0;
	name = password = " ";
}
Person::Person(int id, string name, string password)
{
	this->id = id;
	this->name = name;
	this->password = password;
}
void Person::setId(int id) 
{
	this->id = id;
}

void Person::setName(string name)
{
	if (Validation::name(name))
		this->name = name;
	else
		cout << "ERORR! The name must be contain 5 - 20 alphapetic character only " << endl;
}
void Person::setPassword(string password) 
{
	if (Validation::pass(password))
	{
		this->password = password;
	}
	else
		cout << "ERORR! The password must be greater than or equel 8 and smaller than or equel 20" << endl;
}
int Person::getId() 
{
	return id;
}
string Person::getName() 
{
	return name;
}
string Person::getPassword()
{
	return password;
}
