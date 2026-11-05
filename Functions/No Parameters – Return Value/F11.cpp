//Read a string and return its length.
#include<iostream>
#include<string>
using namespace std;
int len(){
	string s;
	cout<<"Enter String : ";
	getline(cin,s);
	return s.length();
}
int main(){
	cout<<"The length of the String : "<<len();
	return 0;
}
