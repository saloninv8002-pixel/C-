//Different data types+number of parameters
//Create overloaded functions named area() to calculate-square and rectangle
#include<iostream>
using namespace std;

int area(int side) {
    return side*side;
}

float area(float length, float breadth) {
    return length*breadth;
}

int main() {
    cout<<area(5)<<endl;
    cout<<area(5.5, 3.2);
}
