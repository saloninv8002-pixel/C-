
//Write a program to erase 3 characters starting from index 2 in the string "Programming".
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="Programming";
	cout<<s1<<endl;
	s1.erase(2,3);//erase(staring index,numberpf char)
	cout<<"After Erasing : "<<s1;
	return 0;
}
