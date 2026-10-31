//Q15. Find the error in the ternary operator.
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int largest = a > b ? a: b;//removed comma and added colon
    cout << largest;
    return 0;
}

