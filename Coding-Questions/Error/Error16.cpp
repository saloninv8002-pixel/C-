//Q16. Find the error in the for loop.
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++)
        cout << i << endl;//after endl semicolon missing
    return 0;
}

