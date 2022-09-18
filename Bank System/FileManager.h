#pragma once
#include"DataSourceInterface.h"

class FileManager:public DataSourceInterface
{
	void addClient(Client c);
	void addEmployee(Employee e);
	void addAdmin(Admin a);
	vector<Client>getAllClients();
	vector<Employee>getAllEmployees();
	vector<Admin>getAllAdmins();
	void removeAllClients();
	void removeAllEmployees();
	void removeAllAdmins();
};

