//Q30. Find the error in the string input statement.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter full name: ";
    getline(cin, name);//getline gets the entire string

    cout << name;
    return 0;
}

