//Q13. Find the error in the ladder if...else statement.
#include <iostream>
using namespace std;

int main() {
    int mark = 85;

    if (mark >= 90) {
        cout << "A Grade";
    }
    else if (mark >= 75)//removed extra semicolon
    {
        cout << "B Grade";
    }
    else {
        cout << "C Grade";
    }

    return 0;
}

