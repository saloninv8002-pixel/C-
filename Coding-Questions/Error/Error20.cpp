//Q20. Find the error in the factorial program.
#include <iostream>
using namespace std;

int main() {
    int n = 5, fact = 1;//fact must be initialized with 1 

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << fact;
    return 0;
}

