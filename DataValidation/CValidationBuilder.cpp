#include "stdafx.h"
#include "CValidationBuilder.h"
#include "CValidationRegex.h"


CValidationBuilder::CValidationBuilder()
{
}


CValidationBuilder::~CValidationBuilder()
{
}

CValidationBase* CValidationBuilder::GetInstance(E_VALIDATION_TYPE type)
{
	CValidationBase* rtn = NULL;
	switch (type)
	{
	case TYPE_V_REGEX:
		rtn = new CValidationRegex();
		break;
	default:
		break;
	}

	return rtn;
}
