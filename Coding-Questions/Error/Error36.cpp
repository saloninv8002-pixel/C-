//Q36. Find the error in the array traversal program.
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {//only less than 5 not equal to
        cout << arr[i] << " ";
    }

    return 0;
}

