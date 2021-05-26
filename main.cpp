#include <iostream>
#include "helloLibrary.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello, World!" << endl;
    // test();
    std::string s1 = "CLA-0";
    cout << "sizeof(s1):" << sizeof(s1) << endl;
    cout << "sizeof(s1[0]:" << sizeof(s1[0]) << endl;
    cout << "s1 length***:" << s1.length() << endl;
    cout << "s1 length:" << sizeof(s1) / sizeof(s1[0]) << endl;
    return 0;
}