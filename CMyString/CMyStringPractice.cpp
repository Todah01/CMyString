#include <iostream>
#include "CMyString.h"

using namespace std;

int CMyString::msCount = 0;

int main()
{
    CMyString myString_1, myString2;
    myString_1.setData("Hello");
    cout << myString_1.getData() << endl;
    return 0;
}
