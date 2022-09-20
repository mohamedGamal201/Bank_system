#pragma once
#include<iostream>
#include<string.h>
using namespace std;

class Validation
{
public:
	static bool nameValid(string name)
	{
		bool valid = false;
		if (name.size() >= 5 && name.size() <= 20)
		{
			for (int i = 0; i < name.size(); i++)
			{
				if (isalpha(name[i]))
				{
					valid = true;
				}
				else
				{
					valid = false;
					break;
				}
			};
			return valid;
		}
		return valid;
	};
	static bool passValid(string password)
	{
		return (password.size() >= 8 && password.size() <= 20);
	};
	static bool balanceValid(double balance)
	{
		if (balance >= 1500)
			return true;
		else
			return false;
	}
	static bool salaryValid(double salary)
	{
		if (salary >= 5000)
			return true;
		else
			return false;
	}
};

