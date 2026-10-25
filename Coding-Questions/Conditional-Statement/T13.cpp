//Write a C++ program to find the largest of three numbers using nested if statements.
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter Three Numbers : ";
	cin>>a>>b>>c;
	if(a==b && b==c){
		cout<<"All values are Equal";
	}
	else if(a>b && a>c){
		cout<<"The Largest Value : "<<a;
	}
	else if(b>a && b>c){
		cout<<"The Largest Value : "<<b;
	}
	else{
		cout<<"The Largest Value : "<<c;
	}
	
	return 0;
}
