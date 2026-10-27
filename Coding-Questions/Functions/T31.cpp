//Write a C++ program to create a function that adds two numbers and returns the result.
#include<iostream>
using namespace std;
int sum(int a,int b){
	return a+b;
}
int main(){
	int a,b;
	cout<<"Enter two Numbers : ";
	cin>>a>>b;
	cout<<"Sum of Two Numbers : "<<sum(a,b);
	return 0;
}
