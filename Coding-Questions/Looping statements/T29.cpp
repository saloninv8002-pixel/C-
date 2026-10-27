//Write a C++ program to check whether a number is prime.
#include<iostream>
using namespace std;
int main(){
	int n;
	bool prime=true;
	cout<<"Enter a Number : ";
	cin>>n;
	if (n<2){
		prime=false;
	}
	else if(n==2){
		prime=true;
	}
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				prime=false;
				break;
			}
		}
	}
	if (prime){
		cout<<"Prime Number";
	}
	else{
		cout<<"Composite Number";
	}
	return 0;
}
