//Write a C++ program to demonstrate pre-increment, post-increment, pre-decrement, and post-decrement operators
#include<iostream>
using namespace std;
int main(){
	int a=8;
	cout<<"Value of\'A\' before performing Operations : "<<a<<endl;
	cout<<"Pre-Increment : "<<++a<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"Post-Increment : "<<a++<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"Pre-Decrement : "<<--a<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"Post-Decrement : "<<a--<<endl;
	cout<<"A : "<<a<<endl;
	return 0;
}
