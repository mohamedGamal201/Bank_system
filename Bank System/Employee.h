

#include"Person.h"
#include<string>
#include"Client.h"

class Employee :public Person
{
protected:
	double salary;
public:
	Employee();
	Employee(int id, string name, string password, double salary);
	void setSalary(double s);
	double getSalary();
	void display();
	void addClient(Client& a);
	Client* searchClient(int id);
	void listClient();
	void editClient(int id, string name, string password, double balance);
};



