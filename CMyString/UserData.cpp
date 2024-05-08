#include "UserData.h"
#include <iostream>
#include <cstring>

using namespace std;

int UserData::UserDataCnt = 0;

UserData::UserData() {
	
	memset(szName, 0, sizeof(szName));
	memset(szPhone, 0, sizeof(szPhone));

	UserDataCnt++;
}

UserData::UserData(const char* pszName, const char* pszPhone) {
	memset(szName, 0, sizeof(szName));
	memset(szPhone, 0, sizeof(szPhone));

	strcpy_s(szName, sizeof(szName), pszName);
	strcpy_s(szPhone, sizeof(szPhone), pszPhone);

	UserDataCnt++;
}

UserData::~UserData() {
	
	UserDataCnt--;
}

const char* UserData::getKey() {
	return szName;
}

void UserData::printNode() {
#ifdef DEBUG
	cout << this << "\t" << szName << "\t" << szPhone << getNext();
#else
	cout << szName << "\t" << szPhone << "\t" << endl;
#endif
}