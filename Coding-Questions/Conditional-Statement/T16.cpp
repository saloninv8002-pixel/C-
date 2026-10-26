//Write a C++ program to create a simple calculator using a switch statement.
#include<iostream>
using namespace std;
int main(){
	char ch;
	int a,b;
	cout<<"Enter Numbers : ";
	cin>>a>>b;
	cout<<"1.ADD\n2.SUB\n3.MUL\n4.DIV"<<endl;
	cout<<"Enter your Choice : ";
	cin>>ch;
	switch(ch){

		case '1':
			cout<<"Addition  :"<<a+b;
			break;
			
		case '2':
		  cout<<"Subtraction : "<<a-b;
		  break;
		  
		case '3':
			cout<<"Multiplication : "<<a*b;
			break;
			
		case '4':
			if (b!=0){
				cout<<"Division : "<<a/b;
			}
			else{
				cout<<"Division by Zero is not possible";
			}
			break;
			
		default:
			cout<<"Invalid Option ";
			break;
		
	}
	return 0;
}
