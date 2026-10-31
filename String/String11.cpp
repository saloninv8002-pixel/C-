//Write a C++ program to append " World" to the string "Hello" and display the result.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="Hello",s2="World!!";
	cout<<s1.append(s2)<<endl;
	cout<<s1<<endl;
	cout<<s2;
	return 0;
}
