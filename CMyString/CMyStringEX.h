#pragma once
#include "CMyString.h"

class CMyStringEX : public CMyString
{
public : 
	CMyStringEX();
	~CMyStringEX();

	void setData(const char* pParam);
	CMyStringEX& operator=(const char* pParam) {
		this->setData(pParam);
		return *this;
	}
};

