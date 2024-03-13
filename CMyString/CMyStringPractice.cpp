#include <iostream>
#include "CMyStringEX.h"

using namespace std;

int CMyString::msCount = 0;

//void printHello(const char* param) {
//    cout << param << endl;
//}

//void printHello(const CMyString& param) {
//    cout << param << endl;
//}
//
//CMyString getHello() {
//    CMyString hello;
//    hello.setData("Hello");
//    return hello;
//}

int main()
{
    CMyStringEX data;
    data = "Hello";
    cout << data << endl;

    data = "멍멍이아들";
    cout << data << endl;

    return 0;
}
