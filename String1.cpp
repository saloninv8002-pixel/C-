#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
	string Name;
	cout<<"Enter Name : "<<endl;
	getline(cin,Name);
	cout<<"Number of Characters in Name : "<<Name.size()<<endl;
	
	for(int i=0;i<Name.size();i++){
		Name[i]=toupper(Name[i]);
	}	
	
	cout<<"Name in UpperCase : "<<Name;
	
	return 0;
}
