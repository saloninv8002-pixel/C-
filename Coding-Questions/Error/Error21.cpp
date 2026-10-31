//Q21. Find the error in the number-reversing program.
#include <iostream>
using namespace std;

int main() {
    int n = 1234, rev = 0;

    while (n > 0) {
        int digit = n % 10;//extracts the last digit of a number
        rev = rev * 10 + digit;
        n = n / 10;//reduces the number
    }

    cout << rev;
    return 0;
}

