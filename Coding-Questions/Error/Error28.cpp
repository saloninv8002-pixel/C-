//Q28. Find the error in the pass-by-reference program.
#include <iostream>
using namespace std;

void update(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    update(a);//ass by Reference needs a variable whose original value can be modified.
    cout << a;
    return 0;
}

