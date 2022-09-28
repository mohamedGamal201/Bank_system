#include"FileManager.h"
#include"Parser.h"
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
void FileManager::addClient(Client c) {
	fstream f;
	f.open("Clients.txt", ios::out | ios::app);
	if (f.is_open()) {
		f << c.getId() << " " << c.getName() << " " << c.getPassword() << " " << c.getBalance() << endl;
	}
	else
		cout << "file not open" << endl;

	f.close();
};

 void FileManager::addEmployee(Employee e) {
	fstream f;
	f.open("Employees.txt", ios::out | ios::app);
	if (f.is_open()) {
		f << e.getId() << " " << e.getName() << " " << e.getPassword() << " " << e.getSalary() << endl;
	}
	else
		cout << "file not open" << endl;
	f.close();
};

 void FileManager::addAdmin(Admin a) {
	fstream f;
	f.open("Admins.txt", ios::out | ios::app);
	if (f.is_open()) {
		f << a.getId() << " " << a.getName() << " " << a.getPassword() << " " << a.getSalary() << endl;
	}
	else
		cout << "file not open" << endl;
	f.close();
};

 vector<Client> FileManager::getAllClients() {
	vector<Client> v;
	fstream f;
	f.open("Clients.txt", ios::in);
	if (f.is_open()) {
		string line;
		while (getline(f, line)) {
			Client c;
			c = Parser::parserToClient(line);
			v.push_back(c);
		}
	}
	f.close();
	return v;
};

 vector<Employee> FileManager::getAllEmployees() {
	vector<Employee> v;
	fstream f;
	f.open("Employees.txt", ios::in);
	if (f.is_open()) {
		string line;
		while (getline(f, line)) {
			Employee e;
			e = Parser::parserToEmployee(line);
			v.push_back(e);
		}
	}
	f.close();
	return v;
};

 vector<Admin> FileManager::getAllAdmins() {
	vector<Admin> v;
	fstream f;
	f.open("Admins.txt", ios::in);
	if (f.is_open()) {
		string line;
		while (getline(f, line)) {
			Admin a;
			a = Parser::parserToAdmin(line);
			v.push_back(a);
		}
	}
	f.close();
	return v;
};
 void FileManager::removeAllClients() {

	remove("Clients.txt");
	fstream f;
	f.open("Clients.txt", ios::out);
	f.close();

};
 void FileManager::removeAllEmployees() {

	remove("Employees.txt");
	fstream f;
	f.open("Employees.txt", ios::out);
	f.close();
};
 void FileManager::removeAllAdmins() {

	remove("Admins.txt");
	fstream f;
	f.open("Admins.txt", ios::out);
	f.close();
};
