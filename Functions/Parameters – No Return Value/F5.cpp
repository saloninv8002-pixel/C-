//with parameter without return type
//Write a function that accepts two numbers and prints their sum.
#include<iostream>
using namespace std;
void add(int a,int b){
	cout<<"Addition : "<<a+b;
}
int main(){
	int a,b;
	cout<<"Enter 2 Numbers : ";
	cin>>a>>b;
	add(a,b);
	return 0;
}
