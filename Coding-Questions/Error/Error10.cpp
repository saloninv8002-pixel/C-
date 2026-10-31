//Q10. Find the error in the increment operation.
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    a++;
    ++a;//++10 cannot be used bcause increment operator cannot be applied to constant
    cout << a;
    return 0;
}
