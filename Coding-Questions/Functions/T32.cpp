//Write a C++ program to check whether a number is odd or even using a function.
#include<iostream>
using namespace std;
void evenorodd(int n){
	if(n%2==0){
		cout<<"Even Number";
	}
	else{
		cout<<"Odd Number";
	}
}
int main(){
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	evenorodd(n);
	return 0;
}
