//Write a C++ program to check whether a given character is an uppercase letter, lowercase letter, digit, or special character.
#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter Letter : ";
	cin>>ch;
	if (islower(ch)){
		cout<<"Lower Case ";
	}
	else if (isupper(ch)){
		cout<<"Upper Case ";
	}
	else if (isdigit(ch)){
		cout<<"Digit ";
	}
	else{
		cout<<"Special Case" ;
	}
	return 0;
}
