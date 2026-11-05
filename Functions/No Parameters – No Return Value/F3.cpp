//Write a function to display your name, department, and college.
#include<iostream>
#include<string>

using namespace std;
void student_Details(){
	string name,dept,college;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Branch : ";
	cin>>dept;
	cout<<"Enter College Name : ";
	cin>>college;
	cout<<"--- DETAILS---"<<endl;
	cout<<"Student Name : "<<name<<endl;
	cout<<"College Name : "<<college<<endl;
	cout<<"Branch : "<<dept;
}
int main(){
	student_Details();
	return 0;
}
