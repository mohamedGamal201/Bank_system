#pragma once
#include"DataSourceInterface.h"
#include"CreateFiles.h"

class FileManager
{
public:
	static void addClient(Client c) {
		fstream f = CreateFiles::clientFile();
		f.open("Clients.txt", ios::out | ios::app);
		if (f.is_open()) {
			f << c.getId() << " " << c.getName() << " " << c.getPassword() << " " << c.getBalance() << endl;
		}
		else
			cout << "file not open" << endl;

		f.close();
	};
	static void addEmployee(Employee e) {
		fstream f = CreateFiles::emploeeFile();
		f.open("Employees.txt", ios::out | ios::app);
		if (f.is_open()) {
			f << e.getId() << " " << e.getName() << " " << e.getPassword() << " " << e.getSalary() << endl;
		}
		else
			cout << "file not open" << endl;
		f.close();
	};
	static void addAdmin(Admin a) {
		fstream f = CreateFiles::adminFile();
		f.open("Admins.txt", ios::out | ios::app);
		if (f.is_open()) {
			f << a.getId() << " " << a.getName() << " " << a.getPassword() << " " << a.getSalary() << endl;
		}
		else
			cout << "file not open" << endl;
		f.close();
	};
	vector<Client>getAllClients();
	vector<Employee>getAllEmployees();
	vector<Admin>getAllAdmins();
	void removeAllClients();
	void removeAllEmployees();
	void removeAllAdmins();
};

