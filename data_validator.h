#pragma once
#include <iostream>
#include <string>

class  InputValidatorInterface
{
public:
	virtual bool validate(std::string& x) = 0;
};

class FenceInputValidator : public InputValidatorInterface
{
public:
	bool validate(std::string& str) override;
	
};

class RunCommandValidator : public FenceInputValidator
{
public:
	bool validate(std::string& str) override;
};