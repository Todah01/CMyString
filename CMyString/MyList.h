#pragma once
#include "MyNode.h"

class MyNode;

class MyList
{
public:
	MyList(MyNode* pHead);
	~MyList();
	MyNode* findNode(const char* pszName);
	int addNewNode(MyNode* pNewNode);
	int removeNode(const char* pszName);
	void printAll();

protected:
	void releaseList();
	MyNode* g_Head;
};

