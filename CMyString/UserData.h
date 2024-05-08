#pragma once
#include "MyNode.h"

class UserData : public MyNode
{
public:
	UserData();
	UserData(const char* pszName, const char* pszPhone);
	~UserData();

	const char* getName() const { return szName; }
	const char* getPhone() const { return szPhone; }
	static int getUserDataCnt() { return UserDataCnt; }

	virtual const char* getKey();
	virtual void printNode();

public:
	char szName[32];
	char szPhone[32];

	static int UserDataCnt;
};