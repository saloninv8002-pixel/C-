//Q17. Find the error in the while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << i << endl;
        i++;//its should have been an increment operator else it will become an infinie loop
    }

    return 0;
}

