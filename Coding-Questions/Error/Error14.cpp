//Q14. Find the error in the switch statement.
#include <iostream>
using namespace std;

int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        default:
            cout << "Invalid";
    }

    return 0;
}
//added break wherever missing and colon in default

