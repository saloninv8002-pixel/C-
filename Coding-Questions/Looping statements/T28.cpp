//Write a C++ program to check whether a number is a palindrome.
#include<iostream>
using namespace std;
int main(){
	int n,q,rev=0;
	cout<<"Enter Numbers : ";
	cin>>n;
	q=n;
	while(n>0){
		rev=rev*10+n%10;
		n/=10;
	}
	cout<<"The Reversed Number : "<<rev<<endl;
	if (rev==q){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not a Palindrome";
	}
}
