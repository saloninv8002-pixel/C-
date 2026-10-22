#include<iostream>
#include<string>
using namespace std;

int main(){
	string Name,dept;
	cout<<"Enter Name : "<<endl;
	getline(cin,Name);
	cout<<"Enter Department : "<<endl;
	getline(cin,dept);
	cout<<Name.append(dept);
	return 0;
}
//append
