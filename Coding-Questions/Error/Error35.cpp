//Q35. Find the error in the array declaration.
#include <iostream>
using namespace std;

int main() {
    int arr[2];//size has to be specified 
    arr[0] = 10;
    arr[1] = 20;

    cout << arr[0] << " " << arr[1];
    return 0;
}

