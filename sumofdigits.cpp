//sum of digits
#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Enter Number : "<<endl;
	cin>>n;
	while(n>0){
		sum+=n%10;
		n=n/10;
	}
	cout<<"Sum : "<<sum;
	return 0;
}
