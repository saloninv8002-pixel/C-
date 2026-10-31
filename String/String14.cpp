//Write a program to display the first character of a string using begin()
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1;
	cout<<"Enter String : ";
	getline(cin,s1);
	cout<<*s1.begin();
	return 0;
}
