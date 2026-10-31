//Q9. Find the error in the logical condition.
#include <iostream>
using namespace std;

int main() {
    int age = 25;

    if (age >= 18 && age<= 60) {//added age 
        cout << "Eligible";
    }

    return 0;
}


