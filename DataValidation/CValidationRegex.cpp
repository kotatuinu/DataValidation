#include "stdafx.h"
#include "CValidationRegex.h"
#include <regex>
#include <exception>

using namespace std;

CValidationRegex::CValidationRegex()
{
}


CValidationRegex::~CValidationRegex()
{
}

bool CValidationRegex::Verify(std::string &data, std::string &pattern)
{
	bool result = false;
	try {
		regex re(pattern);
		result = regex_match(data, re);
	} catch(const regex_error& err) {
		ASSERT(err.code()!= 0);
		result = false;
	}

	return result;
}

bool CValidationRegex::Verify(std::string &data)
{
	throw exception("unspported");
	return false;
}
