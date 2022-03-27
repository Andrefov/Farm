#include "data_validator.h"


bool FenceInputValidator::validate(std::string &str)
{
	int validateLenght= 0;
	for (int i = 0; str.length() > i; i++)
	{
		if (isdigit(str[i]) == false)
			return false;
	}
	if (validateLenght = stoi(str) < 3)
		return false;
	else
		return true;
		
}

bool RunCommandValidator::validate(std::string& str){
	
	return str == "RUN";
}


