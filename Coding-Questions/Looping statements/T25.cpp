//Write a C++ program to calculate the factorial of a number.
#include<iostream>
using namespace std;
int main(){
	int n,product=1;
	cout<<"Enter N : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		product*=i;
	}
	cout<<"Factorial : "<<product;
	return 0;
}
