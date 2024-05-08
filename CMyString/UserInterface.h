#pragma once

class MyList;

class UserInterface
{
public:
	UserInterface(MyList& rList);
	~UserInterface();

	void addUser();
	void removeUser();
	void searchUser();
	void printUI();
	void run();

protected:
	MyList &myList;
	int nMenu = 0;
};

