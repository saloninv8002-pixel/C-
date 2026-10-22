#include<iostream>
#include<string>
using namespace std;

int main(){
	string sent="Hello World, Beautiful World";
	int lpos=sent.rfind('World');
	cout<<"Last Occurance of the word : "<<lpos;
	return 0;
}//last occurance -rfind
