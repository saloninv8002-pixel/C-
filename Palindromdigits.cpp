//check palindrome of digits
#include<iostream>
using namespace std;
int main(){
	int n,rev=0;
	cout<<"Enter 	Number : ";
	cin>>n;
	int x=n;
	while(n>0){
		rev=rev*10+(n%10);
		n=n/10;
	}
	cout<<"Reversed Number : "<<rev<<endl;
	if (rev==x){
		cout<<"Palindrome"<<endl;
	}
	else{
		cout<<"Not a Palindrome";
	}
	return 0;
}
