//Write a C++ program to reverse the digits of an integer.
#include<iostream>
using namespace std;
int main(){
	int n,rev=0;
	cout<<"Enter Numbers : ";
	cin>>n;
	while(n>0){
		rev=rev*10+n%10;
		n/=10;
	}
	cout<<"The Reversed Number : "<<rev;
}
