//Write a C++ program to reverse a string without using the built-in reverse function.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	cout<<"Enter Name : ";
	cin>>name;
	for(int i=name.size()-1;i>=0;i--){
		cout<<name[i];
	}
	return 0;
}
