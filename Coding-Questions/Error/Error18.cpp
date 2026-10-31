//Q18. Find the error in the do...while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << endl;
        i++;
    } while (i <= 5);//semicolon missing

    return 0;
}

