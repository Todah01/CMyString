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
    CMyString hello("Hello ");
    CMyString world("World");

    world.append(nullptr);

    cout << hello + world << endl;

    return 0;
}
