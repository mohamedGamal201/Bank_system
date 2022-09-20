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
	Employee() :Person() {
		salary = 5000;
	};
	Employee(int id, string name, string password, double salary) :Person(id, name, password) {
		setSalary(salary);
	};
	void setSalary(double s) {
		if (Validation::salaryValid(s))
			salary = s;
		else
		{
			cout << "\aYour salary is less than 5000" << endl;
			exit(0);
		}
	};
	double getSalary() {
		return salary;
	};
	void display() {
		Person::display();
		cout << "Salary: " << getSalary() << endl;
		cout << "\n**************************\n";
	};
};

