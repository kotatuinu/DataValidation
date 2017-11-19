#pragma once
#include "CValidationBase.h"
#include "const.h"

class CValidationBuilder
{
public:
	~CValidationBuilder();
	static CValidationBase* GetInstance(E_VALIDATION_TYPE type);

private:
	CValidationBuilder();

};

