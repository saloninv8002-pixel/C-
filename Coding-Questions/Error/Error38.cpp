//Q38. Find the error in the array sum program.
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum=0;//sum shld be initialized to zero

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    cout << sum;
    return 0;
}

