//Write a function that accepts a number and prints whether it is positive, negative, or zero.
#include<iostream>
using namespace std;
void number(int a){
	if(a>0){
		cout<<"Positive Number ";
	}
	else if(a<0){
		cout<<"Negative Number ";
	}
	else{
		cout<<"All Numbers are Equal";
	}
}
int main(){
	int a;
	cout<<"Enter Number : ";
	cin>>a;
	number(a);
	return 0;
}
