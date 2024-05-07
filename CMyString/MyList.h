#pragma once
#include "UserData.h"


class MyList
{
public:
	MyList();
	~MyList();
	UserData* findNode(char* pszName);
	void addNewNode(char* pszName, char* pszPhone);
	void searchUser(char* pszName);
	void printAll();
	void removeNode(char* pszName);
	void releaseList();

private:
	UserData g_Head;
};

