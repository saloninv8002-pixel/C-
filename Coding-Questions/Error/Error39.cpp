//Q39. Find the error in the largest array element program.
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 45, 23, 67, 34};
    int max = arr[0];//its not 0 its arr[0]

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << max;
    return 0;
}

