//Write a function that accepts three numbers and prints the largest.
#include<iostream>
using namespace std;
void largest(int a,int b,int c){
	if(a==b && b==c){
		cout<<"All are Equal";
	}
	else if(a>=b && a>=c){
		cout<<"Largest - "<<a;
	}
	else if(b>=a && b>=c){
		cout<<"Largest - "<<b;
	}
	else{
		cout<<"Largest - "<<c;
	}
}
int main(){
	int a,b,c;
	cout<<"Enter Three Numbers : ";
	cin>>a>>b>>c;
	largest(a,b,c);
	return 0;
}
	
