//Write a C++ program to count the number of digits in an integer.
#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"Enter Numbers : ";
	cin>>n;
	while(n>0){
		count+=1;
		n/=10;
	}
	cout<<"The Number of Digits in the Number : "<<count;
}
