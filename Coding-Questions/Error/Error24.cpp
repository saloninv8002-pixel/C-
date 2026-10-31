//Q24. Find the error in the function call.
#include <iostream>
using namespace std;

void display(int n) {
    cout << n;
}

int main() {
	int n;
	cout<<"Enter Number : ";//must declare a variable n get the input and use it as an argument since it is a parameterized func
	cin>>n;
  display(n);
  return 0;
}

