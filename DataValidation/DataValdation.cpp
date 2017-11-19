// ConsoleApplication6.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "DataValidation.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include <list>
#include <string>
#include <regex>
#include <map>
#include <iterator>

#include "CValidationBase.h"
#include "CValidationRegex.h"
#include "const.h"


// �B��̃A�v���P�[�V���� �I�u�W�F�N�g�ł��B

CWinApp theApp;

using namespace std;

// �l�̔���
typedef struct VALIDATION_VALUE {
	string ItemName;
	E_VALIDATION_TYPE type;
	string optoins;
} ValidationValue;

//���ڊԂ̔���
// Item to Item Validation
typedef struct ITEMS_RELETIONSHIP {
	E_RELETIONSHIP_VALID_TYPE type;
	string key;
	list<string> keys;
} ItemReletion;


// CSV�̍��ڈʒu��XML�^�O�i�[��̃}�b�s���O
typedef struct MAP_VALUE {
	string key;
	string value;
} MapValue;


list<ValidationValue> validaters = {
	{ "number", TYPE_V_REGEX, "\\d+" },
	{ "alphabet", TYPE_V_REGEX, "[a-zA-Z]+" }, };

list<ItemReletion> itemReletions = {
	{ TYPE_R_DATE, "yaer1", {"month", "day"}},
	{ TYPE_R_ON, "on1",{ "on2", "on2" } },
	{ TYPE_R_OFF, "off1",{ "off2", "off2" } },
};

int main()
{
	int nRetCode = 0;

	list<ItemReletion>::iterator ite1 = itemReletions.begin();
	for (; ite1 != itemReletions.end(); ite1++)
	{
		E_RELETIONSHIP_VALID_TYPE type = ite1->type;
		string key = ite1->key;
		list<string> keys = ite1->keys;
	}

	return nRetCode;
}
