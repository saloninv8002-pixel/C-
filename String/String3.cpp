#include<iostream>
#include<string>

using namespace std;

int main(){
	string email;
	cout<<"Enter Email id : "<<endl;
	getline(cin,email);
	int pos=email.find('@');
	string domain=email.substr(pos+1,email.size());
	cout<<"Domain : "<<domain<<endl;
	return 0;
}

//find,getline,substr
