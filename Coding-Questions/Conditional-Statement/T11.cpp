//Write a C++ program to check whether a number is positive, negative, or zero using an if statement.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	if(n>0){
		cout<<"Positive Number";
	}
	else if(n<0){
		cout<<"Negative Number";
	}
	else{
		cout<<"The Number Is Zero";
	}
	return 0;
}
