#include <iostream>
#include "MyList.h"

using namespace std;

MyList::MyList() {
	cout << "MyList()" << endl;
}

MyList::~MyList() {
	cout << "~MyList()" << endl;
}

UserData* MyList::findNode(char* pszName) {
	UserData* pTmp = g_Head.pNext;
	while (pTmp != NULL) {
		if (strcmp((const char*)pTmp->szName, pszName) == 0)
			return pTmp;

		pTmp = pTmp->pNext;
	}
}

void MyList::addNewNode(char* pszName, char* pszPhone) {
	UserData* pNewUser = NULL;

	if (this->findNode(pszName) != NULL)
		return;

	pNewUser->szName = pszName;
	pNewUser->szPhone = pszPhone;
	pNewUser->pNext = NULL;

	pNewUser->pNext = g_Head.pNext;
	g_Head.pNext = pNewUser;

	return;
}

void MyList::searchUser(char* pszName) {
	UserData* pNode = this->findNode(pszName);
	
	if (pNode != NULL) {
		cout << pNode << " "
			<< pNode->szName << " "
			<< pNode->szPhone << " "
			<< pNode->pNext << endl;
	}
	else {
		cout << "ERROR: 데이터를 찾을 수 없습니다." << endl;
	}
}

void MyList::printAll() {
	UserData* pTmp = g_Head.pNext;
	while (pTmp != NULL) {
		cout << pTmp << " "
			<< pTmp->szName << " "
			<< pTmp->szPhone << " "
			<< pTmp->pNext << endl;
		
		pTmp = pTmp->pNext;
	}
}

void MyList::removeNode(char* pszName) {
	UserData* pPrevNode = &g_Head;
	UserData* pDelete = NULL;

	while (pPrevNode->pNext != NULL) {
		pDelete = pPrevNode->pNext;
		if (strcmp(pDelete->szName, pszName) == 0) {
			pPrevNode->pNext = pDelete->pNext;
			free(pDelete);

			return;
		}

		pPrevNode = pPrevNode->pNext;
	}

	return;
}

void MyList::releaseList() {
	UserData* pTmp = g_Head.pNext;
	UserData* pDelete = NULL;

	while (pTmp != NULL) {
		pDelete = pTmp;
		pTmp = pTmp->pNext;

		free(pDelete);
	}

	//memset?
}