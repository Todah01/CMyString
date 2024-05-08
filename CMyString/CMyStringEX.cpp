#include "CMyStringEX.h"
#include <iostream>

using namespace std;

CMyStringEX :: CMyStringEX() {
	cout << "CMyStringEX()" << endl;
}

CMyStringEX :: ~CMyStringEX() {
	cout << "~CMyStringEX()" << endl;
}

//Called by framework
void CMyStringEX::onSetData(const char*& param) {
	 cout << "CMyStringEx::onSetData()" << endl;
	 if (param != nullptr) {
		 if (strcmp(param, "�۸��̾Ƶ�") == 0) {
			 param = "�츮�Ϳ��";
		 }
	 }

	 CMyString::onSetData(param);
}