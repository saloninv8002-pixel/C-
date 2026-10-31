//Q23. Find the error in the function declaration.
#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    cout << add(10, 20);
    return 0;
}

int add(int a, int b) {
    return a + b;//the function has returnavle datatype int hence value has to returned not printed
}

