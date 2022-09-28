#pragma once
#include<iostream>
#include"DataSourceInterface.h"
#include<vector>
#include"Admin.h"
#include"Client.h"
#include"Employee.h"
using namespace std;




class FileManager :public DataSourceInterface
{
public:
	static void addClient(Client c);
	static void addEmployee(Employee e);
	static void addAdmin(Admin a);
	static vector<Client> getAllClients();
	static vector<Employee>getAllEmployees();
	static vector<Admin>getAllAdmins();
	static void removeAllClients();
	static void removeAllEmployees();
	static void removeAllAdmins();
};






