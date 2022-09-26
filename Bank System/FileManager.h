#pragma once
#include"DataSourceInterface.h"
#include"Parser.h"
#include<string>

class FileManager :public DataSourceInterface
{
public:
	static void addClient(Client c) {
		fstream f;
		f.open("Clients.txt", ios::out | ios::app);
		if (f.is_open()) {
			f << c.getId() << " " << c.getName() << " " << c.getPassword() << " " << c.getBalance() << endl;
		}
		else
			cout << "file not open" << endl;

		f.close();
	};
	static void addEmployee(Employee e) {
		fstream f ;
		f.open("Employees.txt", ios::out | ios::app);
		if (f.is_open()) {
			f << e.getId() << " " << e.getName() << " " << e.getPassword() << " " << e.getSalary() << endl;
		}
		else
			cout << "file not open" << endl;
		f.close();
	};
	static void addAdmin(Admin a) {
		fstream f ;
		f.open("Admins.txt", ios::out | ios::app);
		if (f.is_open()) {
			f << a.getId() << " " << a.getName() << " " << a.getPassword() << " " << a.getSalary() << endl;
		}
		else
			cout << "file not open" << endl;
		f.close();
	};
	static vector<Client> getAllClients() {
		vector<Client> v;
		fstream f;
		f.open("Clients.txt", ios::in);
		if (f.is_open()) {
			string line;
			while (getline(f,line)){
				Client a;
				a = Parser::parserToClient(line);
				v.push_back(a);
			}
		}
		f.close();
		return v;
	};
	static vector<Employee>getAllEmployees() {
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
	static vector<Admin>getAllAdmins() {
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
	static void removeAllClients() {
		
		remove("Clients.txt");
		fstream f;
		f.open("Clients.txt", ios::out);
		f.close();
	
	};
	static void removeAllEmployees() {

		remove("Employees.txt");
		fstream f;
		f.open("Employees.txt", ios::out);
		f.close();
	};
	static void removeAllAdmins() {

		remove("Admins.txt");
		fstream f;
		f.open("Admins.txt", ios::out);
		f.close();
	};
};

