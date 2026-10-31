//Q34. Find the error in the string character access program.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    cout << str[4];//the indexing starts from 0 to str.length()-1
    return 0;
}

