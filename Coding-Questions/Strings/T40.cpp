//Write a C++ program to find the first and last occurrence of a given character in a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str,word;
	cout<<"Enter the String : ";
	getline(cin,str);
	cout<<"Enter the character to be searched : ";
	cin>>word;
	cout<<"First Occurance : "<<str.find(word)<<endl;
	cout<<"Last Occurance : "<<str.rfind(word);
	return 0;
}
