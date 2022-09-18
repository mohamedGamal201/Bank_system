#include "Validation.h"

bool Validation::nameValid(string name)
{
	bool valid = false;
	if (name.size() >= 5 && name.size() <= 20)
	{
		for (int i = 0; i < name.size(); i++)
		{
			if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
			{
				valid = true;
			}
			else
			{
				valid = false;
				break;
			}
		};
		
	}
	return valid;
}

bool Validation::passValid(string password)
{
	
	return (password.size() >= 8 && password.size() <= 20);
		 
}
