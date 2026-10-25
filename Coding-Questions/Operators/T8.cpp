//Write a C++ program to check whether a number is divisible by both 5 and 11 using logical operators.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a Number : ";
	cin>>n;
	if(n%5==0 && n%11==0){
		cout<<"Divisible by both 11 and 5"<<endl;
	}
	else{
		cout<<"Not Divisible";
	}
	return 0;
}
