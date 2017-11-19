#pragma once

#include <string>

class CValidationBase
{
public:

	virtual bool Verify(std::string &data, std::string &regexp) = 0;
	virtual bool Verify(std::string &data) = 0;
};

