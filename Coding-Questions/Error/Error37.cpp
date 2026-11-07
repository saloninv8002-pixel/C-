//Q37. Find the error in the array input program.
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];//it shld be arr[i]
    }

    return 0;
}

