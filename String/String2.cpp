#include<iostream>
#include<string>

using namespace std;

int main(){
	string Name;
	cout<<"Enter Name : "<<endl;
	getline(cin,Name);
	cout<<"Username : "<<Name.substr(0,4);
	return 0;
}
//substring,getline
