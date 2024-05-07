#pragma once
#include "MyList.h"
class UserData
{
public:
	UserData();
	~UserData();

public:
	char* szName;
	char* szPhone;
	UserData* pNext;
};

