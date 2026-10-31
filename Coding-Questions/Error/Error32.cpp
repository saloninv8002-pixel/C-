//Q32. Find the error in the string concatenation program.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first = "Hello";
    string second = "World";
    string result = first + second;
//it should be + operartor not -
    cout << result;
    return 0;
}

