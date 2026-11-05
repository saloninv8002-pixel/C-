//Read an integer and return the number of digits.
#include<iostream>
using namespace std;
int count_digits(){
	int n,count=0;
	cout<<"Enter Number : ";
	cin>>n;
	while(n>0){
		count++;
		n/=10;
	}
	return count;
}
int main(){
	cout<<"The Number of Digits : "<<count_digits();
	return 0;
}

