//Write a program to print the last character of a given string using back()
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1;
	cout<<"Enter String : ";
	getline(cin,s1);
	cout<<s1.back();
	return 0;
}
