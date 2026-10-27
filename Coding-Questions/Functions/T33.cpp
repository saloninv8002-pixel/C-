//Write a C++ program to find the largest of three numbers using a user-defined function.
#include<iostream>
using namespace std;
void largest(int a,int b,int c){
	if(a==b==c){
		cout<<"All are Equal !!";
	}
	else if(a>=b && a>=c){
		cout<<"The Largest : "<<a;
	}
	else if(b>=a && b>=c){
		cout<<"The Largest : "<<b;
	}
	else{
		cout<<"The Largest : "<<c;
	}
}
int main(){
	int a,b,c;
	cout<<"Enter 3 Numbers : ";
	cin>>a>>b>>c;
	largest(a,b,c);
	return 0;
	
}
