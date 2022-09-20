#pragma once
#include<iostream>
#include<string.h>
#include"Employee.h"
using namespace std;

class Admin : public Employee
{
public:
	Admin() :Employee() {

	}
	Admin(int id, string name, string password, double salary) :Employee(id, name, password,salary) {

	}
	void display() {
		Employee::display();
	};
};

