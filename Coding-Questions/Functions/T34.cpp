//Write a C++ program to calculate the factorial of a number using a recursive function.
#include<iostream>
using namespace std;
int fact(int n){
	if (n<=1){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<fact(n);
	return 0;
}


