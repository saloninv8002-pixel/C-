//Q7. Find the error in the modulus operation.
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << a % b;//modulus operators works only with integer
    return 0;
}

