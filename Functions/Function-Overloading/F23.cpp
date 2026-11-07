//Create overloaded functions named maximum() to find:
// Maximum of two integers
// Maximum of three integers
#include<iostream>
#include<algorithm>
using namespace std;

int max1(int a, int b) {
    return max(a,b);
}

int max1(int a, int b, int c) {
    return max(a,max(b,c));
}

int main() {
    cout<<max1(10,20)<<endl;
    cout<<max1(10,20,30);
    return 0;
}
