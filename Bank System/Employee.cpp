#include"Employee.h"
#include"FileManager.h"
#include"Validation.h"
#include"string.h"
#include"Client.h"
#include<vector>
#include<iostream>
using namespace std;


Employee::Employee() :Person() {
	salary = 5000;
};
Employee::Employee(int id, string name, string password, double salary) :Person(id, name, password) {
	setSalary(salary);
};
void Employee::setSalary(double s) {
	if (Validation::salaryValid(s))
		salary = s;
	else
	{
		cout << "\aYour salary is less than 5000" << endl;
		exit(0);
	}
};
double Employee::getSalary() {
	return salary;
};
void Employee::display() {
	Person::display();
	cout << "Salary: " << getSalary() << endl;
	cout << "\n**************************\n";
};
void Employee::addClient(Client& a) {
	FileManager::addClient(a);
}
Client* Employee::searchClient(int id) {
	vector<Client> v;
	v = FileManager::getAllClients();
	int pos = 0;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].getId() == id) {
			pos = i;
			break;
		}
	}
	return &v[pos];
}
void Employee::listClient() {
	vector<Client> v;
	v = FileManager::getAllClients();
	for (int i = 0; i < v.size(); i++) {
		v[i].display();
	}
}
void Employee::editClient(int id, string name, string password, double balance) {
	Client a;
	a.setId(id);
	a.setName(name);
	a.setPassword(password);
	a.setBalance(balance);
}