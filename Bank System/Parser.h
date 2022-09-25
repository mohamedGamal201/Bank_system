#pragma once
#include <string>
#include<sstream>
using namespace std;


class Parser
{
	string str;
public:
	static vector<string> split(string line) {
		string str = "";
		vector<string> word;
		for (int i = 0; i < line.size(); i++) {
			if (line[i] != ' ') {
				str += line[i];
			}
			else {
				word.push_back(str);
				str = "";
			}

		}
		word.push_back(str);
		return word;
	}
	static Client parserToClient(string line) {
		Client a;
		vector<string> v;
		v = split(line);
		// to convert string to integar use stoi method in string laibrary.
		a.setId(stoi(v[0]));
		a.setName(v[1]);
		a.setPassword(v[2]);
		a.setBalance(stoi(v[3]));
		return a;
	}
	static Employee parserToEmployee(string line) {
		Employee e;
		vector<string> v;
		v = split(line);
		// to convert string to integar use stoi method in string laibrary.
		e.setId(stoi(v[0]));
		e.setName(v[1]);
		e.setPassword(v[2]);
		e.setSalary(stoi(v[3]));
		return e;
	}
	static Admin parserToAdmin(string line) {
		Admin a;
		vector<string> v;
		v = split(line);
		// to convert string to integar use stoi method in string laibrary.
		a.setId(stoi(v[0]));
		a.setName(v[1]);
		a.setPassword(v[2]);
		a.setSalary(stoi(v[3]));
		return a;
	}
};

