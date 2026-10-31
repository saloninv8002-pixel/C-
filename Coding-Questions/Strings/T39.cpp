//Write a C++ program to count the vowels, consonants, digits, and spaces in a string.
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	int vowels=0,consonants=0,digits=0,spaces=0;
	cout<<"Enter string : ";
	getline(cin,str);
	for(int i=0;i<str.size();i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			vowels++;
		}
		else if (isdigit(str[i])){
			digits++;
		}
		else if(str[i]==' '){
			spaces++;
		}
		else {
			consonants++;
		}
	}
	cout<<"Number of Vowels : "<<vowels<<endl;
	cout<<"Number of Consonants : "<<consonants<<endl;
	cout<<"Number of Digit : "<<digits<<endl;
	cout<<"Number of spaces : "<<spaces<<endl;

	return 0;
	}
	
