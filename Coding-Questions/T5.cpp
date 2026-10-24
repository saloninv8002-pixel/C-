#include<iostream>
using namespace std;
int main(){
	cout<<"---SWAPPING NUMBERS---";
	int a=12,b=13,c;
	cout<<"Before Swapping..."<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swapping..."<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
		
	return 0;
	//Write a C++ program to swap two numbers without using a temporary variable.

}
