#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class CreateFiles
{
public:
	static fstream clientFile() {
		fstream clientFile;

		return clientFile;
	};
	static fstream emploeeFile() {
		fstream employeeFile;
		return employeeFile;
	};
	static fstream adminFile() {
		fstream adminFile;
		return adminFile;
	};
};

