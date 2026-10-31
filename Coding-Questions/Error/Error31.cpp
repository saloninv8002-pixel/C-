//Q31. Find the error in the string length program.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    cout << str.length();//paranthesis missing
    return 0;
}

