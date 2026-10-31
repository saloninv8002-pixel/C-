//Q25. Find the error in the return statement.
#include <iostream>
using namespace std;

int square(int n) {
    return n * n;//the function is a returnable type hence it has to return some value
}

int main() {
    cout << square(5);
    return 0;
}

