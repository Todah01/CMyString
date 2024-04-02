#include "CMyStringEX.h"
#include <iostream>

using namespace std;

CMyStringEX :: CMyStringEX() {
	cout << "CMyStringEX()" << endl;
}

CMyStringEX :: ~CMyStringEX() {
	cout << "~CMyStringEX()" << endl;
}

//void CMyStringEX::setData(const char* pParam)
//{
//	cout << "CMyStringEX::setData" << endl;
//	if (pParam != nullptr) {
//		if (strcmp(pParam, "�۸��̾Ƶ�") == 0) {
//			CMyString::setData("�Ϳ��");
//			return;
//		}
//
//		CMyString::setData(pParam);
//	}
//}

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