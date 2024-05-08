#pragma once

class MyNode
{
	friend class MyList;
public:
	MyNode();
	virtual ~MyNode();

	MyNode* getNext() const { return pNext; }

	virtual const char* getKey() = 0;
	virtual void printNode() = 0;

private:
	MyNode* pNext;
};

