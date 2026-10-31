//Write a C++ program to compare two strings and check whether they are equal.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1,str2;
	cout<<"Enter String 1 : ";
	cin>>str1;
	cout<<"Enter String 2 : ";
	cin>>str2;
	if(str1.compare(str2)==0){
		cout<<"Both strings are Equal";
	}
	else{
		cout<<"They are not equal";
	}
	return 0;
}
