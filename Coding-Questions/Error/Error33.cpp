//Q33. Find the error in the string comparison program.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "Hello";
    string b = "Hello";

    if (a == b) {//== checks if both are equal = assigns value
        cout << "Equal";
    }

    return 0;
}

