#include <iostream>
#include "CMyString.h"

using namespace std;

int CMyString::msCount = 0;

//void printHello(const char* param) {
//    cout << param << endl;
//}

void printHello(const CMyString& param) {
    cout << param << endl;
}

CMyString getHello() {
    CMyString hello;
    hello.setData("Hello");
    return hello;
}

int main()
{
    CMyString result;
    result = ::getHello();
    cout << result << endl;

    CMyString test(move(::getHello()));
    return 0;
}
