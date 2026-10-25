//Write a C++ program to check whether a year is a leap year.
#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter Year : ";
	cin>>year;
	if((year%400==0) || ((year%100!=0) && (year%4==0))){
		cout<<year<<"- Leap Year";
	}
	else{
		cout<<year<<" - Not a Leap Year";
	}
	return 0;
}
