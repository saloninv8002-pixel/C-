//Q5. Find the error in the variable initialization.
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int total = a + b;//replaced c eith b
    cout << total;
    return 0;
}

