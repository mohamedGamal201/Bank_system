
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
	fstream client, employee, admin;
	client.open("Client.txt", ios::app);
	client << "hello"<<endl;
	client.close();
	employee.open("Employee.txt", ios::app);
	employee << "this is Employee text file" << endl;
	employee.close();
	admin.open("Admin.txt", ios::app);
	admin << "this is Admin text file" << endl;
	admin.close();
}

