//Write a C++ program to check whether a number is odd or even using an if...else statement
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	if (n%2==0){
		cout<<"Even Number";
	}
	else{
		cout<<"Odd Number";
	}
	return 0;
}
