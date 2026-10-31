//Write a C++ program to find the length of a string without using the built-in length() function.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	int count=0;
	cout<<"Enter Name : ";
	getline(cin,name);
	for(int i=0;name[i]!='\0';i++){
		count++;
	}
	cout<<"The length of the String : "<<count;
	return 0;
}
