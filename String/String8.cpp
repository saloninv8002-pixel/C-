#include<iostream>
#include<string>
using namespace std;

int main(){
	string Product_Code;
	cout<<"Enter Product Code : "<<endl;
	getline(cin,Product_Code);
	Product_Code.insert(3,"-2026-");
	cout<<"Modified Product Code : "<<Product_Code<<endl;
	return 0;
}
//insert
