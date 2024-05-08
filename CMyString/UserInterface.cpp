#include "UserInterface.h"
#include "MyList.h"
#include "UserData.h"
#include <iostream>
#include <conio.h>

using namespace std;

UserInterface::UserInterface(MyList& rList) : myList(rList) {

}

UserInterface::~UserInterface() {

}

void UserInterface::addUser() {

	char szName[32] = { 0 };
	char szPhone[32] = { 0 };

	cout << "Input name : ";
	cin >> szName;

	cout << "Input phone number : ";
	cin >> szPhone;

	UserData* pNewData = new UserData(szName, szPhone);
	myList.addNewNode(pNewData);
}

void UserInterface::removeUser() {

	char szName[32] = { 0 };

	cout << "Input name : ";
	cin >> szName;

	if (myList.removeNode(szName))
		cout << "삭제완료." << endl;
	else
		cout << "ERROR: 삭제할 데이터를 찾을 수 없습니다." << endl;
}

void UserInterface::searchUser() {

	char szName[32] = { 0 };
	UserData* pNode = nullptr;

	cout << "Input name : ";
	cin >> szName;

	pNode = static_cast<UserData*>(myList.findNode(szName));

	if (pNode != nullptr) {
		pNode->printNode();
	}
	else {
		cout << "ERROR: 데이터를 찾을 수 없습니다." << endl;
	}

	_getch();
}

void UserInterface::printUI() {
	system("cls");
	cout << "[1] Add\t" << "[2] Search\t"
		<< "[3] Print all\t" << "[4] Remove\t[0]"
		<< "Exit\n:" << endl;

	cin >> nMenu;
}

void UserInterface::run() {
	printUI();
	while (nMenu != 0) {
		switch (nMenu) {
		case 1:
			addUser();
			break;
		case 2:
			searchUser();
			break;
		case 3:
			myList.printAll();
			break;
		case 4:
			removeUser();
			break;
		}
	}
}