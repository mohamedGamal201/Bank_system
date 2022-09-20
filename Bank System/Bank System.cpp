
#include <iostream>
#include <windows.h>
#include <fstream>
#include <string.h>
#include"Client.h"
#include"FileManager.h"
#include"Admin.h"

using namespace std;

int main()
{
	Admin c(111, "Mohamed", "2ds3df21e", 600);
	
	c.display();
}

