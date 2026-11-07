//Q41. Find the error in the array element search program.
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    bool found = false;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == key) {//== is assignment not comparison
            found = true;
            break;
        }
    }

    cout << (found ? "Found" : "Not Found");
    return 0;
}

