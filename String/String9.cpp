#include<iostream>
#include<string>
using namespace std;

int main(){
	string phno;
	cout<<"Enter Phone Number with Country Code : "<<endl;
	cin>>phno;
	phno.erase(0,3);
	cout<<"Number without country code : "<<phno<<endl;
	return 0;
}
//erase
