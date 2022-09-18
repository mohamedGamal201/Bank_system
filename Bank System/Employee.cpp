#include "Employee.h"

Employee::Employee()
{
	salary = 5000;
}

Employee::Employee(int id, string name, string password, double salary):Person(id,name,password)
{
	this->salary = salary;
}

void Employee::setSalary(double salary)
{
	if (salary < 5000)
	{
		cout << "The min salary is 5000." << endl;
	}
	else
		this->salary = salary;
}

double Employee::getSalary()
{
	return salary;
}


void Employee::display()
{
	cout << "Employee Name: " << name << endl;
	cout << "Employee ID: " << id << endl;
	cout << "Employee Password: " << password << endl;
	cout << "Employee Salary: " << salary << endl;
}
