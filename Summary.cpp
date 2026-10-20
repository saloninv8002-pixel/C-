#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	int age;
	float wages;
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter Age : ";
	cin>>age;
	cout<<"Enter Wages : ";
	cin>>wages;
	cout<<"---- SUMMARY ----"<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Wage for 1 Hour : "<<wages<<endl;
	return 0;	
	
	//O/p
	//Enter name : Saloni
	//Enter Age : 18
	//Enter Wages : 500
	//---- SUMMARY ----
	//Name : Saloni
	//Age : 18
	//Wage for 1 Hour : 500

}
