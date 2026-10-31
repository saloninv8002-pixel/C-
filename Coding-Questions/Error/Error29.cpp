//Q29. Find the error in the string declaration.
#include <iostream>
#include<string>//string headerfile missing
using namespace std;

int main() {
    string name = "Sridhar";
    cout << name;
    return 0;
}

