//Write a C++ program to find the largest of two numbers using the ternary operator.
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter Numbers : ";
	cin>>a>>b;
	(a>b)?cout<<a<<" - Largest":cout<<b<<" - Largest";
	return 0;
}
