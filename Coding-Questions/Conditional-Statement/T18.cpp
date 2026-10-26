//Write a C++ program to check whether a person is eligible to vote based on age.
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter Age : ";
	cin>>age;
	if(age>=18){
		cout<<"Eligible to Vote";
	}
	else{
		cout<<"Not Eligible to Vote";
	}
	return 0;
}
