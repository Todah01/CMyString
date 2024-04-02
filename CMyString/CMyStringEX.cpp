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
//		if (strcmp(pParam, "¸Û¸ÛÀÌ¾Æµé") == 0) {
//			CMyString::setData("±Í¿ä¹Ì");
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
		 if (strcmp(param, "¸Û¸ÛÀÌ¾Æµé") == 0) {
			 param = "¿ì¸®±Í¿ä¹Ì";
		 }
	 }

	 CMyString::onSetData(param);
}