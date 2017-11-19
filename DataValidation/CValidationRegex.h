#pragma once
#include "CValidationBase.h"
class CValidationRegex :
	public CValidationBase
{
public:
	CValidationRegex();
	~CValidationRegex();

	virtual bool Verify(std::string &data, std::string &regexp) override;
	virtual bool Verify(std::string &data) override;
};

