#pragma once

#include"Employee.h"
#include "FileManager.h"
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
	void addClient(Client &c) {
		FileManager::addClient(c);
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
	void addEmployee(Employee& e) {
		FileManager::addEmployee(e);
	}
	Employee* searchEmployee(int id) {
		vector<Employee> v;
		v = FileManager::getAllEmployees();
		int pos = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getId() == id) {
				pos = i;
				break;
			}
		}
		return &v[pos];
	}
	void listEmployee() {
		vector<Employee> v;
		v = FileManager::getAllEmployees();
		for (int i = 0; i < v.size(); i++) {
			v[i].display();
		}
	}
	void editEmployee(int id, string name, string password, double salary) {
		Employee e;
		e.setId(id);
		e.setName(name);
		e.setPassword(password);
		e.setSalary(salary);
	}
};

