//Write a C++ program to calculate a student's grade using a ladder if...else statement
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter Marks : ";
	cin>>marks;
	if(marks>=90 && marks<=100){
		cout<<"Grade - A";
	}
	else if(marks>=80 && marks<=89){
		cout<<"Grade - B";
	}
	else if(marks>=70 && marks<=79){
		cout<<"Grade - C";
	}
	else if(marks>=60 && marks<=69){
		cout<<"Grade - D";
	}
	else if(marks>=50 && marks<=59){
		cout<<"Grade - E";
	}
	else{
		cout<<"Fail";
	}
	return 0;
}
