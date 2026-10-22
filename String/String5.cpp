#include<iostream>
#include<string>
using namespace std;

int main(){
	string correct_username="Saloni@123";
	string username;
	cout<<"Enter Name : "<<endl;
	getline(cin,username);
	if (correct_username.compare(username)==0){
		cout<<"Correct Username"<<endl;
	}
	else{
		cout<<"Invalid Username"<<endl;
	}
	
	return 0;
}
//compare
