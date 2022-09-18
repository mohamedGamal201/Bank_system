#pragma once
#include <string.h>
#include "Person.h"
#include"Client.h"
#include<iostream>
class Employee :public Person
{
protected:
	double salary;
public:
	Employee();
	Employee(int id, string name, string password, double salary);
	void setSalary(double salary);
	double getSalary();
	void display();
};

