#include"Admin.h"
#include"Client.h"
#include"Employee.h"
#include<string>
#include "FileManager.h"
#include<vector>
#include<iostream>
using namespace std;

Admin::Admin() :Employee()
{

};
Admin::Admin(int id, string name, string password, double salary) :Employee(id, name, password, salary) {

}
void Admin::display() {
	Employee::display();
};
void Admin::addClient(Client& c) {
	FileManager::addClient(c);
}
Client* Admin::searchClient(int id) {
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
void Admin::listClient() {
	vector<Client> v;
	v = FileManager::getAllClients();
	for (int i = 0; i < v.size(); i++) {
		v[i].display();
	}
}
void Admin::editClient(int id, string name, string password, double balance) {
	Client a;
	a.setId(id);
	a.setName(name);
	a.setPassword(password);
	a.setBalance(balance);
}
void Admin::addEmployee(Employee& e) {
	FileManager::addEmployee(e);
}
Employee* Admin::searchEmployee(int id) {
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
void Admin::listEmployee() {
	vector<Employee> v;
	v = FileManager::getAllEmployees();
	for (int i = 0; i < v.size(); i++) {
		v[i].display();
	}
}
void Admin::editEmployee(int id, string name, string password, double salary) {
	Employee e;
	e.setId(id);
	e.setName(name);
	e.setPassword(password);
	e.setSalary(salary);
}
