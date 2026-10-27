//Write a C++ program to print the Fibonacci series for N terms.
#include<iostream>
using namespace std;
int main(){
	int n,second=1,first=0,c;
	cout<<"Enter Number : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<first<<",";
		c=first+second;
		first=second;
		second=c;
	}
	return 0;
	
}
