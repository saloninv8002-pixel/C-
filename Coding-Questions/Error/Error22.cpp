//Q22. Find the error in the prime number program.
#include <iostream>
using namespace std;

int main() {
    int n = 7, count = 0;

    for (int i = 1; i <= n; i++) {//"=" is missing
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << "Prime";
    }
    else {
        cout << "Not Prime";
    }

    return 0;
}

