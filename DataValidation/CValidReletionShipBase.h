#pragma once
#include <string>
#include <list>

class CValidReletionShipBase
{
public:
	virtual bool Verify(std::string key, std::list<std::string> &keys);
};

