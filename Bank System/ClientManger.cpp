#include"ClientManger.h"
#include<iostream>
#include"Client.h"
#include"FileManager.h"
using namespace std;

 int ClientManger::ClientMenu() {
	int choies = -1;
	while (choies == -1) {
		cout << "1 - Check my balance\n";
		cout << "2 - Deposit\n";
		cout << "3 - Withdraw\n";
		cout << "4 - Transfar To\n";
		cout << "5 - Updata password\n";
		cout << "6 - Display\n";
		cout << "7 - Back \n";
		cout << "\t Enter your choies: ";
		cin >> choies;
		if (!(1 <= choies && choies <= 7)) {
			cout << "Invalid choies. Try again\n";
			choies = -1;
		}
	}
	return choies;
}
 void ClientManger::ClientOption(Client c) {
	 int choies = ClientMenu();
	 switch (choies)
	 {
	 case 1:
		 c.checkBalance();
		 break;
	 case 2:
		 int amount;
		 cout << "Amount: ";
		 cin >> amount;
		 c.deposit(amount);
		 break;
	 case 3:
		 cout << "Amount: ";
		 cin >> amount;
		 c.withdraw(amount);
		 break;
	 case 4:
		 int id;
		 cout << "Amount: ";
		 cin >> amount;
		 cout << "Enter Id for Client: ";
		 cin >> id;
		 ////vector<Client> v = FileManager::getAllClients();
		 //for (int i = 0; i < v.size(); i++) {
		 //	if (v[i].getId() == id)
		 //		cout << " ";
		 //}
		 break;
		 //c.transferTo(amount,c);
	 default:
		 break;
	 }
 };