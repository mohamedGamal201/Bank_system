#pragma once
#include<iostream>
using namespace std;

#include"FileManager.h"


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
	void addClient(Client &a) {
		FileManager::addClient(a);
	}
	Client* searchClient(int id) {								
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
	void listClient() {
		vector<Client> v;
		v = FileManager::getAllClients();
		for (int i = 0; i < v.size(); i++) {
			v[i].display();
		}
	}
	void editClient(int id, string name, string password, double balance) {
		Client a;
		a.setId(id);
		a.setName(name);
		a.setPassword(password);
		a.setBalance(balance);
	}
};
