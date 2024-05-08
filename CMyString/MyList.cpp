#include "MyList.h"
#include "UserData.h"
#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

MyList::MyList(MyNode* pHead) {
	g_Head = pHead;
}

MyList::~MyList() {
	
	releaseList();
}

MyNode* MyList::findNode(const char* pszKey) {

	MyNode* pTmp = g_Head->pNext;

	while (pTmp != nullptr) {

		if (strcmp(pTmp->getKey(), pszKey) == 0)
			return pTmp;

		pTmp = pTmp->pNext;
	}

	return nullptr;
}

int MyList::addNewNode(MyNode* pNewNode) {

	if (findNode(pNewNode->getKey()) != nullptr) {
		delete pNewNode;
		return 0;
	}

	pNewNode->pNext = g_Head->pNext;
	g_Head->pNext = pNewNode;

	return 1;
}

int MyList::removeNode(const char* pszName) {

	MyNode* pPrevNode = g_Head;
	MyNode* pDelete = nullptr;

	while (pPrevNode->pNext != nullptr) {

		pDelete = pPrevNode->pNext;

		if (strcmp(pDelete->getKey(), pszName) == 0) {

			pPrevNode->pNext = pDelete->pNext;
			delete pDelete;

			return 1;
		}

		pPrevNode = pPrevNode->pNext;
	}

	return 0;
}

void MyList::printAll() {

	MyNode* pTmp = g_Head;

	while (pTmp != NULL) {
		pTmp->printNode();
		pTmp = pTmp->pNext;
	}

	cout << "CUserData Counter : \n" << UserData::getUserDataCnt() - 1 << endl;

	_getch();
}

void MyList::releaseList() {

	MyNode* pTmp = g_Head;
	MyNode* pDelete = nullptr;

	while (pTmp != nullptr) {

		pDelete = pTmp;
		pTmp = pTmp->pNext;

		delete pDelete;
	}

	g_Head = nullptr;
}