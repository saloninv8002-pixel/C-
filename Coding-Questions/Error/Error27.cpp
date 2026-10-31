//Q27. Find the error in the function overloading program.
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {//both the functions had same datatype as parameter which may cause a compilation error
    return a + b;
}

int main() {
    cout << add(10, 20);
    return 0;
}

