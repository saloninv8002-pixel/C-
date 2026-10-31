//Write a C++ program to check whether a string is a palindrome.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name,rev="";
	cout<<"Enter Name : ";
	cin>>name;
	for(int i=name.size()-1;i>=0;i--){
		rev+=name[i];
	}
	if(rev==name){
		cout<<"Palindrome";
	}
	else{
		cout<<"Not a Palindrome";
	}
	return 0;
}
